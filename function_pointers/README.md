<div align="center">
  <img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png" alt="Banner">
</div>

# C - Function pointers

## Table of Contents
- [Resources](#resources)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)

---

## Resources

### Read or Watch
- Function Pointer in C  
- Pointers to functions  
- Function Pointers in C / C++  
- Why pointers to functions?  
- Everything you need to know about pointers in C

---

## Learning Objectives

### General
- What are function pointers and how to use them  
- What does a function pointer exactly hold  
- Where does a function pointer point to in the virtual memory

---

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 20.04 LTS using `gcc` with:
  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- Files must end with a new line  
- A `README.md` file is **mandatory**
- Code must follow **Betty style**
- No global variables
- Max **5 functions per file**
- Allowed standard functions: `malloc`, `free`, `exit`
- **_putchar** is allowed
- Do not push `_putchar.c`, it won't be used
- All prototypes (including `_putchar`) must be in `function_pointers.h`
- Header files must be **include guarded**

---

## Tasks

### 0. What's my name
- Write a function that prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *));`

📁 **File:** `0-print_name.c`

---

### 1. If you spend too much time thinking about a thing, you'll never get it done
- Write a function that executes a function given as a parameter on each element of an array.
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`

📁 **File:** `1-array_iterator.c`

---

### 2. To hell with circumstances; I create opportunities
- Write a function that searches for an integer.
- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
- Returns the index of the first match using the `cmp` function
- Return `-1` if no match or if `size <= 0`

📁 **File:** `2-int_index.c`

---

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
- Write a program that performs simple operations.
- Usage: `calc num1 operator num2`

#### Operators allowed:
- `+`: addition
- `-`: subtraction
- `*`: multiplication
- `/`: division
- `%`: modulo

### Requirements:
- Use `atoi()` for argument conversion
- Return `98` for wrong number of arguments
- Return `99` for unknown operator
- Return `100` if dividing or modulo by 0

### Files required:

#### `3-calc.h`
Contains:
```c
/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
```

#### `3-op_functions.c`
- `op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod`

#### `3-get_op_func.c`
- `int (*get_op_func(char *s))(int, int);`
- Uses `ops[]` to return the right function
- No switch, goto, loops (only 1 `if` and 1 `while` allowed)

#### `3-main.c`
- Contains only the `main()` function
- Uses only 3 `if` statements max

📁 **Files:** `3-main.c`, `3-op_functions.c`, `3-get_op_func.c`, `3-calc.h`

✅ **Compilation example:**
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1024 \* 98
```

---

✅ Project completed successfully with dynamic function pointer execution, operator function mapping, and modular separation of logic.

