<div align="center">
  <img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png" alt="Banner">
</div>

# C - malloc, free

## Table of Contents
- [Resources](#resources)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)

---

## Resources

### Read or Watch
- [0x0a - malloc & free - quick overview.pdf](https://example.com)
- [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64) (stop at 6:50)

### Man or Help
- `malloc`
- `free`

---

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What is the difference between automatic and dynamic allocation
- What are `malloc` and `free` and how to use them
- Why and when to use `malloc`
- How to use `valgrind` to check for memory leaks

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
- The only **C standard library functions** allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc. is **forbidden**
- You are **allowed** to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do, it won’t be taken into account
- The prototypes of all your functions and the prototype of `_putchar` should be included in your header file called `main.h`
- **Do not forget to push your header file**
- You do **not** have to learn about `calloc` and `realloc`

---

## Tasks

### 0. Float like a butterfly, sting like a bee
Write a function that creates an array of chars and initializes it with a specific char.

- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size = 0`
- Returns a pointer to the array, or `NULL` if it fails
- **File:** `0-create_array.c`

---

### 1. The woman who has no imagination has no wings
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- Prototype: `char *_strdup(char *str);`
- Returns `NULL` if `str = NULL`
- On success, the `_strdup` function returns a pointer to the duplicated string
- It returns `NULL` if insufficient memory was available
- **File:** `1-strdup.c`

---

### 2. He who is not courageous enough to take risks will accomplish nothing in life
Write a function that concatenates two strings.

- Prototype: `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null-terminated
- If `NULL` is passed, treat it as an empty string
- The function should return `NULL` on failure
- **File:** `2-str_concat.c`

---

### 3. If you even dream of beating me you'd better wake up and apologize
Write a function that returns a pointer to a **2-dimensional array** of integers.

- Prototype: `int **alloc_grid(int width, int height);`
- Each element of the grid should be initialized to `0`
- The function should return `NULL` on failure
- If `width` or `height` is `0` or negative, return `NULL`
- **File:** `3-alloc_grid.c`

---

### 4. It's not bragging if you can back it up
Write a function that **frees a 2-dimensional grid** previously created by your `alloc_grid` function.

- Prototype: `void free_grid(int **grid, int height);`
- **File:** `4-free_grid.c`

---

✨ **This README follows the expected format for future projects.** Let me know if you need any changes! 🚀
