/*
 * External scanner for the cvg grammar.
 *
 * 1. Nested block comments.
 *    Uses tree-sitter's external scanner mechanism to parse block comments
 *    that support nesting. A depth counter tracks nested opening and closing
 *    delimiters. The token completes when the counter reaches zero.
 *    Returns false if EOF is reached before all comments are closed.
 *
 * 2. Scale separator (`_` in `scale c_major`).
 *    `_` is a subset of the word token (identifier), so the internal lexer
 *    would lex `_major` as one identifier. This scanner emits exactly one
 *    `_` character, only when it immediately follows the previous token
 *    (no leading whitespace).
 *
 * cvg 文法の外部スキャナ。
 *   1. ネスト可能なブロックコメント。
 *   2. scale 指定 `c_major` の区切り `_`。 `_` は identifier の部分集合で
 *      内部レキサだと `_major` が identifier になってしまうため、直前に空白が
 *      無い `_` 1 文字だけをここで切り出す。
 */

#include "tree_sitter/parser.h"

/* Token types matching the externals array index in grammar.js. */
enum TokenType {
  BLOCK_COMMENT,  /* Nested block comment token */
  SCALE_SEPARATOR /* `_` between note name and scale type (immediate) */
};

/* Create scanner instance. Stateless, so returns NULL. */
void *tree_sitter_cvg_external_scanner_create(void) { return NULL; }

/* Destroy scanner instance. No-op since stateless. */
void tree_sitter_cvg_external_scanner_destroy(void *payload) {}

/* Serialize scanner state. Returns 0 since stateless. */
unsigned tree_sitter_cvg_external_scanner_serialize(void *payload,
                                                    char *buffer) {
  return 0;
}

/* Deserialize scanner state. No-op since stateless. */
void tree_sitter_cvg_external_scanner_deserialize(void *payload,
                                                  const char *buffer,
                                                  unsigned length) {}

/*
 * Scan for a nested block comment.
 *
 * Detects the opening delimiter, then uses a depth counter:
 * increments on nested opening delimiters, decrements on closing ones.
 * Returns true when depth reaches 0, false on EOF (unclosed comment).
 */
bool tree_sitter_cvg_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
  /*
   * Scale separator: must be checked before skipping whitespace so that
   * `c _major` / `c major` are rejected. Only a single `_` is consumed, and
   * it must be immediately followed by a lowercase letter so that
   * `c_ major` is rejected too (the scale type keyword itself is lexed by
   * the internal lexer, which would otherwise skip whitespace).
   * 空白スキップ前に判定し、直後の `_` 1 文字だけを消費する。 `_` の直後が
   * 英小文字でなければ失敗させ、 `c_ major` も拒否する。
   */
  if (valid_symbols[SCALE_SEPARATOR] && lexer->lookahead == '_') {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    if (lexer->lookahead < 'a' || lexer->lookahead > 'z') {
      return false;
    }
    lexer->result_symbol = SCALE_SEPARATOR;
    return true;
  }

  if (!valid_symbols[BLOCK_COMMENT]) {
    return false;
  }

  /* Skip leading whitespace */
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
         lexer->lookahead == '\r' || lexer->lookahead == '\n') {
    lexer->advance(lexer, true);
  }

  /* Detect opening delimiter */
  if (lexer->lookahead != '/') {
    return false;
  }
  lexer->advance(lexer, false);
  if (lexer->lookahead != '*') {
    return false;
  }
  lexer->advance(lexer, false);

  /* Parse block comment body with nesting support */
  int depth = 1;
  while (depth > 0 && !lexer->eof(lexer)) {
    if (lexer->lookahead == '/') {
      lexer->advance(lexer, false);
      if (!lexer->eof(lexer) && lexer->lookahead == '*') {
        depth++;
        lexer->advance(lexer, false);
      }
    } else if (lexer->lookahead == '*') {
      lexer->advance(lexer, false);
      if (!lexer->eof(lexer) && lexer->lookahead == '/') {
        depth--;
        lexer->advance(lexer, false);
      }
    } else {
      lexer->advance(lexer, false);
    }
  }

  lexer->result_symbol = BLOCK_COMMENT;
  return depth == 0;
}
