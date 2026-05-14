🌐 Available languages:
🇺🇸 English | 🇧🇷 [Português](README.pt.md)

---

*This project was created as part of the 42 curriculum by brfialho.*

---

# Libft — My Personal Library

## Introduction

This is the lib I used in many of my 42 projects, and has evolved with me along the cursus. It has my own preferences and design philosofies, alongside many extra features and changes.

## Design philosofie

Many of the functions where changed to be unsafe/cause premature segfaults in case of the incorrect usage. The idea is that the programmer has the responsibility of not using the functions where they should not be used. Also passing a NULL where it should not be will cause a segfault, which is easy to track, debug and fix. I always try to move the responsibility to the caller, and my code aims to be as modular as possible.

## Extra features

In comparison to the vanilla libft, this one has a lot more to offer, such as:

- Macros for convenience
- Custom typedefs to help in line size as per 42 Norm
- Extra linked lts funtions
- Extra string functions
- A generic matrix set of functions
- The printf and get_next_line projects
- Basic funtions for AST
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
- `make fclean` - Remove all
- `make re` - Clean and rebuild everything

Example:

```bash
make
```

This creates:

```
libft.a
```

### 2. Include it in your C program

```c
#include "libft.h"
```

### 3. Compile your project linking against it

```bash
cc main.c -Ipath/to/headers -Lpath/to/libft_root_folder -lft
```

Or:

```bash
cc main.c -Ipath/to/headers path/to/libft.a
```
