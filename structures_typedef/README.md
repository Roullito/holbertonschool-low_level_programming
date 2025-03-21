<div align="center">
  <img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png" alt="Banner">
</div>

# C - Structures, typedef

## Table of Contents
- [Resources](#resources)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)

---

## Resources

### Read or Watch
- 0x0d. Structures.pdf  
- struct (C programming language)  
- Documentation: structures  
- 0x0d. Typedef and structures.pdf  
- typedef  
- Programming in C by Stephen Kochan - Chapter 8, Working with Structures (p.163–189)  
- The Lost Art of C Structure Packing (Advanced - not mandatory)

---

## Learning Objectives

By the end of this project, you should be able to explain, without external help:

### General
- What are structures, when, why and how to use them  
- How to use `typedef`

---

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`  
- All files compiled on **Ubuntu 20.04 LTS** using `gcc` with:
- Wall -Werror -Wextra -pedantic -std=gnu89
- All files must end with a **new line**  
- A `README.md` file is **mandatory**  
- Code must follow the **Betty style**  
- No global variables  
- No more than **5 functions per file**  
- Allowed C standard library functions: `printf`, `malloc`, `free`, `exit`  
- Don’t forget to push your **header file**  
- All header files should be **include guarded**

---

## Tasks

### 0. Poppy

Define a new type `struct dog` with the following elements:
- `name`: `char *`  
- `age`: `float`  
- `owner`: `char *`  

📁 **File:** `dog.h`

---

### 1. A dog is the only thing on earth that loves you more than you love yourself

Write a function that initializes a variable of type `struct dog`.

- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`  

📁 **File:** `1-init_dog.c`

---

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function that prints a `struct dog`.

- Prototype: `void print_dog(struct dog *d);`  
- If an element is `NULL`, print `(nil)`  
- If `d` is `NULL`, print nothing  

📁 **File:** `2-print_dog.c`

---

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

Define a new type `dog_t` as a new name for the type `struct dog`.

📁 **File:** `dog.h`

---

### 4. A door is what a dog is perpetually on the wrong side of

Write a function that creates a new dog.

- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`  
- You must store a **copy** of `name` and `owner`  
- Return `NULL` if the function fails  

📁 **File:** `4-new_dog.c`

---

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function that frees dogs.

- Prototype: `void free_dog(dog_t *d);`  

📁 **File:** `5-free_dog.c`

---

✅ Project completed with attention to memory management, clean structure usage, and dynamic allocation.


