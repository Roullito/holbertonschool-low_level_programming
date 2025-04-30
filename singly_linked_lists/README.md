![Holberton Logo](https://raw.githubusercontent.com/holbertonschool/Betty/master/logo.png)

# C - Singly Linked Lists

## 📚 Description
This project focuses on the use and implementation of singly linked lists in C. You'll learn when and why to use linked lists over arrays, how to build and traverse them, and how to perform basic operations like insertion and deletion.

---

## 🎯 Learning Objectives
By the end of this project, you should be able to explain:

- What a singly linked list is
- When to use linked lists vs arrays
- How to build and manipulate linked lists

---

## 🛠️ Requirements
- OS: Ubuntu 20.04 LTS
- Compiler: `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Coding Style: [Betty style](https://github.com/holbertonschool/Betty)
- No global variables
- Max 5 functions per file
- Allowed C library functions: `malloc`, `free`, `exit`
- Custom `_putchar` allowed
- Header file: `lists.h` (must include all prototypes and be include-guarded)

---

## 🧱 Data Structure
```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

---

## 📂 Project Files
All files are located in the `singly_linked_lists` directory of the `holbertonschool-low_level_programming` repository.

### Mandatory Tasks

#### 0. Print list
- **File**: `0-print_list.c`
- **Prototype**: `size_t print_list(const list_t *h);`
- Prints each element of the list
- If `str` is NULL, prints `[0] (nil)`

#### 1. List length
- **File**: `1-list_len.c`
- **Prototype**: `size_t list_len(const list_t *h);`
- Returns the number of elements in the list

#### 2. Add node at the beginning
- **File**: `2-add_node.c`
- **Prototype**: `list_t *add_node(list_t **head, const char *str);`
- Duplicates the string and adds node to the start of the list

#### 3. Add node at the end
- **File**: `3-add_node_end.c`
- **Prototype**: `list_t *add_node_end(list_t **head, const char *str);`
- Adds a node at the end of the list

#### 4. Free list
- **File**: `4-free_list.c`
- **Prototype**: `void free_list(list_t *head);`
- Frees all nodes in the list

---

## ✅ Compilation
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c <file.c> -o <output>
```

---

## 🧪 Example
```c
[5] Hello
[5] World
-> 2 elements
```

---

## 🧠 Author & Credits
**Project provided by [Holberton School](https://www.holbertonschool.com/)**

---

## 📝 License
This project is part of the Holberton School curriculum.

---

