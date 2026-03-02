# tree-sitter-cvg

A [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar definition for the lcvgc DSL (.cvg files).

## Overview

`tree-sitter-cvg` is a Tree-sitter grammar for parsing the text-based DSL used by lcvgc. When combined with nvim-treesitter in Neovim, it enables syntax highlighting and code analysis for .cvg files.

## Related Projects

tree-sitter-cvg works in conjunction with the following projects:

- [lcvgc](https://github.com/vikke/lcvgc) — The live coding engine itself. The backend that defines and executes the DSL this parser targets.
- [lcvgc.nvim](https://github.com/vikke/lcvgc.nvim) — A Neovim plugin. Install this grammar via `:TSInstall cvg` and use it for syntax highlighting.
- [lcvgc_mic](https://github.com/vikke/lcvgc_mic) — A CLI tool that detects pitch from microphone input in real time and generates note text in lcvgc DSL format.

## Installation

### Via nvim-treesitter (Recommended)

The parser information is automatically registered by `setup()` in lcvgc.nvim, so installation requires only the following command:

```vim
:TSInstall cvg
```

### Manual Build

```bash
git clone https://github.com/vikke/tree-sitter-cvg
cd tree-sitter-cvg
npm install
npm run build
npm test
```
