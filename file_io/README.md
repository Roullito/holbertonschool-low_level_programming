<div align="center">
  <img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png" alt="Banner">
</div>

# C - File I/O

## Description

This project focuses on mastering the use of **system calls** in C to manage files at a low level. You will learn how to use `open`, `read`, `write`, and `close` directly, understand **file descriptors**, permissions, and proper error handling.

---

## Learning Objectives
By the end of this project, you should be able to explain:

- What is a system call and how it's different from a regular C function
- What are file descriptors and how they relate to standard input/output
- How to:
  - Create and open files using `open()`
  - Write into and read from files using `write()` and `read()`
  - Close file descriptors properly using `close()`
- The meaning of permission flags like `O_RDONLY`, `O_WRONLY`, `O_RDWR`, `O_CREAT`, `O_APPEND`, and `O_TRUNC`
- How to safely copy the contents of a file into another
- Why you should check return values and handle errors correctly

---

## Requirements

- Ubuntu 20.04 LTS
- C standard: GNU89
- Only system calls `read`, `write`, `open`, `close` allowed
- No use of standard C library functions like `printf`, `puts`, `calloc`, etc.
- Use of `dprintf` is allowed
- No global variables
- Maximum 5 functions per file
- Header file: `main.h`
- All functions must be prototyped in `main.h`

---

## File Structure

```
file_io/
├── main.h
├── 0-read_textfile.c
├── 1-create_file.c
├── 2-append_text_to_file.c
├── 3-cp.c
```

---

## Tasks Overview

### 0. `read_textfile`
- Reads a given number of letters from a file and prints to `STDOUT`
- Returns the number of letters it could read and print

### 1. `create_file`
- Creates a file or truncates an existing one
- Writes a given string to the file
- Sets permissions to `rw-------`

### 2. `append_text_to_file`
- Appends a given string to the end of an existing file
- Does not create a new file

### 3. `cp`
- Copies the content of one file into another
- Handles all error cases with specific exit codes:
  - `97`: Incorrect argument count
  - `98`: Read error
  - `99`: Write error
  - `100`: Close error

---

## Example Usage
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-read_textfile.c -o readfile
./readfile poem.txt

./cp file_from.txt file_to.txt
```

---

## Resources
- [File descriptors](https://man7.org/linux/man-pages/man2/open.2.html)
- [System calls (YouTube)](https://www.youtube.com/watch?v=1f0BjigTn7Y)
- [Betty style guide](https://github.com/holbertonschool/Betty/wiki)

---

## Author
**Julien Barbier** — Project from Holberton School

## License
This project is part of the Holberton School curriculum and is protected under its educational license.
