# Numpulate

A simple C library

- [Numpulate](#numpulate)
  - [Why I made this](#why-i-made-this)
  - [Compilation](#compilation)

## Why I made this

If you've taken a stroll in my profile you'd notice that this repo is my only C repo, the others are either written in Rust or Python.

So why I made this repo?

I wanted to have a little bit experience on Rust's FFI and how to call C from Rust. That's about it. That's why I have a bunch of weird integer manipulation functions lying around

You can get the output binaries in the *releases* tab.

## Compilation

***NOTE: I assume you're using linux for this, and that you have `cmake` and `make` installed. I assume the process is the same for MacOS and other \*nix systems***

***I don't know the process for Windows, I guess you just set up MinGW, CMake, and GNU Make***

After cloning this repo with:

```
git clone https://github.com/Kiwifuit/Numpulate
```

You run these commands:

```
cmake .
make
```
