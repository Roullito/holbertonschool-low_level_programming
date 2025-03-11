<div align="center">
  <img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png" alt="Banner">
</div>

# C - More malloc, free

## Table of Contents
- [Resources](#resources)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)

---

## Resources

### Read or Watch
- [Do I cast the result of malloc?](https://example.com)

### Man or Help
- `exit (3)`
- `calloc`
- `realloc`

---

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- How to use the `exit` function
- What are the functions `calloc` and `realloc` from the standard library and how to use them

---

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on **Ubuntu 20.04 LTS** using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a **new line**
- A `README.md` file, at the root of the folder of the project is **mandatory**
- Your code should use the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are **not allowed** to use global variables
- No more than **5 functions per file**
- The only **C standard library functions** allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc. is **forbidden**
- You are **allowed** to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do, it won’t be taken into account
- The prototypes of all your functions and the prototype of `_putchar` should be included in your header file called `main.h`
- **Do not forget to push your header file**

---

## Tasks

### 0. Trust no one
Write a function that allocates memory using `malloc`.

- Prototype: `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory
- If `malloc` fails, the function should cause normal process termination with a status value of `98`
- **File:** `0-malloc_checked.c`

---

### 1. string_nconcat
Write a function that concatenates two strings.

- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null-terminated
- If `n` is greater or equal to the length of `s2`, then use the entire string `s2`
- If `NULL` is passed, treat it as an empty string
- The function should return `NULL` on failure
- **File:** `1-string_nconcat.c`

---

### 2. _calloc
Write a function that allocates memory for an array, using `malloc`.

- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
- The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
- The memory is set to zero
- If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`
- If `malloc` fails, `_calloc` returns `NULL`
- **File:** `2-calloc.c`

---

### 3. array_range
Write a function that creates an array of integers.

- Prototype: `int *array_range(int min, int max);`
- The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`
- Return: the pointer to the newly created array
- If `min` > `max`, return `NULL`
- If `malloc` fails, return `NULL`
- **File:** `3-array_range.c`

---

✨ **This README follows the expected format for future projects.** Let me know if you need any changes! 🚀
