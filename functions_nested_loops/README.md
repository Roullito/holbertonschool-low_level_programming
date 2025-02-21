<div align="center">
  <img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png" alt="Banner">
</div>

# C - Functions, Nested Loops

This project introduces the concepts of functions and nested loops in **C programming**, emphasizing their usage and how they interact.

---

## Table of Contents

- [Resources](#resources)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)
- [Usage](#usage)
- [Author](#author)

---

## Resources

### Read or Watch
- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw) *(stop at 14:00)*
- [What is a function prototype?](https://en.wikipedia.org/wiki/Function_prototype)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)

### Man or Help
- `gcc`
- `printf (3)`
- `_putchar`

---

## Learning Objectives

By the end of this project, you should be able to explain the following concepts **without Google**:

### General
- What are **nested loops** and how to use them.
- What is a **function** and how to use it.
- The difference between a **declaration** and a **definition** of a function.
- What is a **prototype**.
- **Scope** of variables.
- What are the `gcc` flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- What are **header files** and how to use them with `#include`.

---

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on **Ubuntu 20.04 LTS** using `gcc` with the following options:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```
- All files must end with a **new line**.
- A **README.md** file is **mandatory**.
- Code must follow **Betty style** (`betty-style` and `betty-doc`).
- **No global variables** allowed.
- Maximum of **5 functions per file**.
- **No standard library** functions (`printf`, `puts`, etc.).
- Allowed to use `_putchar`.
- All function prototypes should be included in `main.h`.

---

## Tasks

### `0. _putchar`
📌 **Description:**
Write a program that prints `_putchar`, followed by a new line.

📂 **File:** `0-putchar.c`

---

### `1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game`
📌 **Description:**
Write a function that prints the alphabet, in lowercase, followed by a new line.

📂 **File:** `1-alphabet.c`

---

### `2. 10 x alphabet`
📌 **Description:**
Write a function that prints **10 times the alphabet**, in lowercase, followed by a new line.

📂 **File:** `2-print_alphabet_x10.c`

---

### `3. islower`
📌 **Description:**
Write a function that checks for lowercase character.
- Prototype: `int _islower(int c);`
- Returns `1` if `c` is lowercase, `0` otherwise.

📂 **File:** `3-islower.c`

---

### `4. isalpha`
📌 **Description:**
Write a function that checks for alphabetic character.
- Prototype: `int _isalpha(int c);`
- Returns `1` if `c` is a letter (lowercase or uppercase), `0` otherwise.

📂 **File:** `4-isalpha.c`

---

### `5. Sign`
📌 **Description:**
Write a function that prints the sign of a number.
- Prototype: `int print_sign(int n);`
- Returns:
  - `1` and prints `+` if `n` is greater than zero.
  - `0` and prints `0` if `n` is zero.
  - `-1` and prints `-` if `n` is less than zero.

📂 **File:** `5-sign.c`

---

### `6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you`
📌 **Description:**
Write a function that computes the absolute value of an integer.
- Prototype: `int _abs(int n);`

📂 **File:** `6-abs.c`

---

### `7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important`
📌 **Description:**
Write a function that prints the last digit of a number.
- Prototype: `int print_last_digit(int n);`
- Returns the value of the last digit.

📂 **File:** `7-print_last_digit.c`

---

### `8. I'm federal agent Jack Bauer, and today is the longest day of my life`
📌 **Description:**
Write a function that prints **every minute of the day** of Jack Bauer, from `00:00` to `23:59`.

📂 **File:** `8-24_hours.c`

---

### `9. Learn your times table`
📌 **Description:**
Write a function that prints the **9 times table**, starting with `0`.
- Prototype: `void times_table(void);`

📂 **File:** `9-times_table.c`

---

### `10. a + b`
📌 **Description:**
Write a function that **adds two integers** and returns the result.
- Prototype: `int add(int a, int b);`

📂 **File:** `10-add.c`

---

### `11. 98 Battery Street, the OG`
📌 **Description:**
Write a function that **prints all natural numbers** from `n` to `98`, followed by a new line.
- Prototype: `void print_to_98(int n);`

📂 **File:** `11-print_to_98.c`

---

## Usage

### Checking Code Style with **Betty**
1. Install **Betty**:
```bash
git clone https://github.com/holbertonschool/Betty.git
cd Betty
sudo ./install.sh
```
2. Run **Betty** on a C file:
```bash
betty my_file.c
```

### Compiling a C File
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 my_file.c -o my_program
./my_program
```

---

## Author
Project developed as part of the **Holberton School** curriculum.
