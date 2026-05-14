🌐 Available languages:
🇺🇸 English | 🇧🇷 [Português](README.pt.md)

---

*This project was created as part of the 42 curriculum by brfialho.*

---

# Libft — My Personal Library

## Introduction

This is the library I used in many of my 42 projects, and it has evolved with me along the cursus. It reflects my own preferences and design philosophies, alongside many extra features and changes.

## Design philosophy

Many of the functions were changed to be unsafe or cause premature segfaults in case of incorrect usage. The idea is that the programmer has the responsibility of not using the functions when they should not be used. Also, passing a NULL where it should not be will cause a segfault, which is easy to track, debug, and fix. I always try to move the responsibility to the caller, and my code aims to be as modular as possible.

## Extra features

In comparison to the vanilla libft, this one has a lot more to offer, such as:

- Macros for convenience
- Custom typedefs to help with line length as per 42 Norm
- Extra linked list functions
- Extra string functions
- A generic matrix set of functions
- The printf and get_next_line projects
- Basic functions for AST
- Some sorting functions for int arrays
- Time helper functions

## Instructions

### Prerequisites

- GCC or Clang compiler
- GNU Make

### Compilation

Available build targets:

- `make` - Compile the entire project
- `make clean` - Remove object files
- `make fclean` - Remove all generated files
- `make re` - Clean and rebuild everything

Example:

```bash
make
```

This creates:

```
libft.a
```

### 1. Include it in your C program

```c
#include "libft.h"
```

### 2. Compile your project linking against it

Note: the commands below assume you are compiling from the libft root folder. If libft is in a subfolder (e.g., libs/libft/), adjust the -I and -L paths accordingly

```bash
cc main.c -I./headers -L. -lft
```

Or:

```bash
cc main.c -I./headers libft.a
```
