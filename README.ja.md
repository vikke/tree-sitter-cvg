# tree-sitter-cvg

lcvgc DSL（.cvgファイル）用の [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) 文法定義。

## 概要

`tree-sitter-cvg` は、lcvgc のテキストベース DSL をパースするための Tree-sitter 文法です。Neovim の nvim-treesitter と組み合わせることで、.cvg ファイルのシンタックスハイライトやコード解析が可能になります。

## 関連プロジェクト

tree-sitter-cvg は以下のプロジェクトと連携して動作します:

- [lcvgc](https://github.com/vikke/lcvgc) — ライブコーディングエンジン本体。このパーサーが対象とする DSL を定義・実行するバックエンド
- [lcvgc.nvim](https://github.com/vikke/lcvgc.nvim) — Neovim プラグイン。`:TSInstall cvg` でこの文法をインストールし、シンタックスハイライトに使用
- [lcvgc_mic](https://github.com/vikke/lcvgc_mic) — マイク入力からリアルタイムにピッチを検出し、lcvgc DSL形式のノートテキストを生成するCLIツール

## インストール

### nvim-treesitter 経由（推奨）

lcvgc.nvim の `setup()` でパーサー情報が自動登録されるため、以下のコマンドだけでインストールできます:

```vim
:TSInstall cvg
```

### 手動ビルド

```bash
git clone https://github.com/vikke/tree-sitter-cvg
cd tree-sitter-cvg
npm install
npm run build
npm test
```
