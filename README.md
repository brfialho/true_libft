🌐 Available languages:
🇺🇸 English | 🇧🇷 [Português](README.pt.md)

---

*This project was created as part of the 42 curriculum by brfialho.*

---

# Libft — My Personal C Library

## Introduction

This is the library I use throughout many of my 42 projects. It has evolved alongside me during the cursus and reflects both my programming preferences and design philosophy, while also including many additional utilities and improvements over the original subject.

## Design philosophy

Many functions in this library intentionally avoid defensive checks and may segfault on incorrect usage. The idea is that the caller is responsible for ensuring valid input and correct usage.

For example, passing a NULL pointer to a function that does not expect one will typically result in an immediate segfault — something that is usually straightforward to track, debug, and fix during development.

I always try to move the responsibility to the caller, and my code aims to be as modular as possible.

## Extra features

Compared to the vanilla libft, this version includes many additional features, such as:

- Convenience macros
- Custom typedefs to help with line length as per 42 Norm
- Extra linked list functions
- Extra string manipulation functions
- A generic matrix set of functions
- Integrated `ft_printf` and `get_next_line`
- Basic AST helper functions
- Sorting utilities for integer arrays
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
- `make re` - Rebuild library from scratch

Example:

```bash
make
```

This generates:

```
libft.a
```

### 1. Include it in your C program

```c
#include "libft.h"
```

### 2. Compile your project linking against it

Note: the commands below assume you are compiling from the libft root directory. If libft is in a subfolder (e.g., libs/libft/), adjust the include -I and library -L paths accordingly

```bash
cc main.c -I./headers -L. -lft
```

Or:

```bash
cc main.c -I./headers libft.a
```
