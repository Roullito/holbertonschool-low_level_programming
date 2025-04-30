<div align="center">
  <img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png" alt="Banner">
</div>

# C - Doubly linked lists

## 📚 Table of Contents

- [Description](#description)
- [Learning Objectives](#learning-objectives)
- [Data Structure](#data-structure)
- [Requirements](#requirements)
- [Files](#files)
- [Compilation](#compilation)
- [Usage](#usage)
- [Author](#author)

---

## 📝 Description

This project is part of the Holberton School low-level programming curriculum. It focuses on manipulating **doubly linked lists** in C, including creation, traversal, insertion, deletion, and memory management. You will learn to manage dynamic memory efficiently and understand how bi-directional node traversal works.

---

## 🎯 Learning Objectives

At the end of this project, you should be able to explain:

- What is a doubly linked list.
- How and why to use doubly linked lists instead of singly linked lists.
- How to properly manage memory when using dynamic data structures.
- How to debug memory leaks using tools like Valgrind.

---

## 🧱 Data Structure

```c
/**
 * struct dlistint_s - doubly linked list node structure
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

---

## ✅ Requirements

- OS: Ubuntu 20.04 LTS
- Language: C (C90 standard)
- Style: Betty compliant
- No use of global variables
- No more than 5 functions per file
- Allowed functions: `malloc`, `free`, `printf`, `exit`

---

## 📁 Files

| File                      | Description                                      |
|---------------------------|--------------------------------------------------|
| `0-print_dlistint.c`      | Print all elements of a `dlistint_t` list       |
| `1-dlistint_len.c`        | Return number of elements in a `dlistint_t` list|
| `2-add_dnodeint.c`        | Add node at the beginning                       |
| `3-add_dnodeint_end.c`    | Add node at the end                             |
| `4-free_dlistint.c`       | Free the list                                   |
| `5-get_dnodeint.c`        | Get node at a given index                       |
| `6-sum_dlistint.c`        | Return the sum of all data (n)                  |
| `7-insert_dnodeint.c`     | Insert node at given index                      |
| `8-delete_dnodeint.c`     | Delete node at given index                      |
| `lists.h`                 | Header file with all prototypes and struct      |

---

## 🛠️ Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
```

---

## 🚀 Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/holbertonschool-low_level_programming.git
   cd holbertonschool-low_level_programming/doubly_linked_lists
   ```

2. Compile and run the test files:
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c *.c -o executable
   ./executable
   ```

---

## 👨‍💻 Author

- **Roullito**  
  🏫 Holberton School - Low-level programming  
  🔗 [github.com/Roullito](https://github.com/Roullito)

---

## 🏁 Status

✅ All tasks successfully completed — **100%** score on Holberton Checker.
