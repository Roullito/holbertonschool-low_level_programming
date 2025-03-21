<div align="center">
  <img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png" alt="Banner">
</div>

# C - Variadic functions

## Table of Contents
- [Resources](#resources)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)

---

## Resources

### Read or Watch
- [stdarg.h](https://en.cppreference.com/w/c/variadic)
- [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [Const Keyword](https://www.learncpp.com/cpp-tutorial/const-variables-and-symbolic-constants/)

### man or help:
- `stdarg`

---

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without external help:

### General
- What are **variadic functions**
- How to use `va_start`, `va_arg`, and `va_end` macros
- Why and how to use the `const` type qualifier

---

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on **Ubuntu 20.04 LTS** using `gcc` with:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a **new line**
- A `README.md` file at the root of the folder is **mandatory**
- Your code must use the **Betty style** (`betty-style.pl` and `betty-doc.pl`)
- You are **not allowed** to use global variables
- No more than **5 functions per file**
- The only allowed C standard functions are `malloc`, `free`, and `exit`
- You are allowed to use the following macros:  
  `va_start`, `va_arg`, `va_end`
- You can use `_putchar`
- Don’t push `_putchar.c`; we will use our file
- The prototypes of all functions, including `_putchar`, must be in `variadic_functions.h`
- All header files should be **include guarded**

---

## Tasks

### 0. Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, return `0`
- **File:** `0-sum_them_all.c`

---

### 1. To be is to be the value of a variable

Write a function that prints numbers, followed by a new line.

- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- `separator` is the string to be printed between numbers
- If `separator` is `NULL`, don’t print it
- Print a new line at the end
- **File:** `1-print_numbers.c`

---

### 2. One woman's constant is another woman's variable

Write a function that prints strings, followed by a new line.

- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
- If one of the strings is `NULL`, print `(nil)`
- If `separator` is `NULL`, don’t print it
- Print a new line at the end
- **File:** `2-print_strings.c`

---

### 3. To be is a to be the value of a variable

Write a function that prints anything.

- Prototype: `void print_all(const char * const format, ...);`
- `format` can contain:
  - `c`: `char`
  - `i`: `integer`
  - `f`: `float`
  - `s`: `char *`
- Use `printf`
- If string is `NULL`, print `(nil)`
- You **cannot** use: `for`, `goto`, ternary operator, `else`, `do ... while`
- Max 2 `while` loops, 2 `if`, and 9 variables
- Print a new line at the end
- **File:** `3-print_all.c`

---

💡 This README is fully structured for Holberton projects and follows the format you've defined. Let me know if you want me to generate the `main.h` or any `.c` file in the same spirit!
