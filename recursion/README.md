<div align="center">
  <img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png" alt="Banner">
</div>

# C - Recursion

## Table of Contents
- [Resources](#resources)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)

---

## Resources

### Read or Watch
- [Recursion, introduction](https://www.geeksforgeeks.org/recursion/)
- [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
- [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
- [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XIC4cPfu4Ug)
- [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=5o-kdjv7FD0)

---

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What is recursion
- How to implement recursion
- In what situations you should implement recursion
- In what situations you shouldn’t implement recursion

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
- You are **not allowed** to use the standard library (`printf`, `puts`, etc.)
- You are **allowed** to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- The prototypes of all your functions and the prototype of `_putchar` should be included in your header file called `main.h`
- **Do not forget to push your header file**
- You are **not allowed** to use any kind of loops
- You are **not allowed** to use static variables

---

## Tasks

### 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
Write a function that prints a string, followed by a new line.

- Prototype: `void _puts_recursion(char *s);`
- **File:** `0-puts_recursion.c`

---

### 1. Why is it so important to dream? Because, in my dreams we are together
Write a function that prints a string in reverse.

- Prototype: `void _print_rev_recursion(char *s);`
- **File:** `1-print_rev_recursion.c`

---

### 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
Write a function that returns the length of a string.

- Prototype: `int _strlen_recursion(char *s);`
- **File:** `2-strlen_recursion.c`

---

### 3. You mustn't be afraid to dream a little bigger, darling
Write a function that returns the factorial of a given number.

- Prototype: `int factorial(int n);`
- If `n` is lower than `0`, the function should return `-1` to indicate an error.
- **File:** `3-factorial.c`

---

### 4. Once an idea has taken hold of the brain it's almost impossible to eradicate
Write a function that returns the value of `x` raised to the power of `y`.

- Prototype: `int _pow_recursion(int x, int y);`
- If `y` is lower than `0`, the function should return `-1`.
- **File:** `4-pow_recursion.c`

---

### 5. Your subconscious is looking for the dreamer
Write a function that returns the natural square root of a number.

- Prototype: `int _sqrt_recursion(int n);`
- If `n` does not have a natural square root, the function should return `-1`.
- **File:** `5-sqrt_recursion.c`

---

### 6. Inception. Is it possible?
Write a function that returns `1` if the input integer is a **prime number**, otherwise return `0`.

- Prototype: `int is_prime_number(int n);`
- **File:** `6-is_prime_number.c`

---

✨ **This README follows the expected format for future projects.** Let me know if you need any changes! 🚀

