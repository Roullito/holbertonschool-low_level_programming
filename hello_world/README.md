<div align="center">
  <img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png" alt="Banner">
</div>

# C - Hello, World

This project introduces the basics of the **C programming language**, covering compilation, basic syntax, and standard output functions.

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
- [Everything you need to know to start with C (PDF)](https://intranet.hbtn.io/rltoken/startC)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C (Part 1)](https://www.youtube.com/watch?v=QL26FPHainw)
- [Learning to program in C (Part 2)](https://www.youtube.com/watch?v=kKN28gSEJpA)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Betty Coding Style](https://github.com/holbertonschool/Betty)
- [Linus Torvalds on C vs. C++](https://www.realworldtech.com/forum/?threadid=43841&curpostid=43853)

### Man or Help
- `gcc`
- `printf (3)`
- `puts`
- `putchar`

---

## Learning Objectives

By the end of this project, you should be able to explain the following concepts **without Google**:

### General
- Why **C programming** is powerful and widely used
- Who are **Dennis Ritchie**, **Brian Kernighan**, and **Linus Torvalds**
- What happens when running `gcc main.c`
- What is an **entry point** (`main`)
- How to print text using `printf`, `puts`, and `putchar`
- How to get the **size of a data type** using `sizeof`
- How to **compile** a C program
- What is the **official C coding style**, and how to check it with `betty-style`
- How to find the **right standard library header** to include
- How the **main function** affects the program's return value

---

## Requirements

### C
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on **Ubuntu 20.04 LTS** using `gcc` with the following options:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
All files must end with a new line
No warnings or errors during compilation
No use of system() is allowed
Code must follow Betty Style (betty-style and betty-doc)
Shell Scripts
Executed on Ubuntu 20.04 LTS
Each script must be exactly two lines long (wc -l <file> should print 2)
All files must end with a new line
The first line of each script must be #!/bin/bash
Tasks
0. Preprocessor
📌 Description:
Write a script that runs a C file through the preprocessor and saves the output into a file named c.

📂 File: 0-preprocessor

1. Compiler
📌 Description:
Write a script that compiles a C file but does not link it.

📂 File: 1-compiler

2. Assembler
📌 Description:
Write a script that generates assembly code from a C file and saves it as a .s file.

📂 File: 2-assembler

3. Name
📌 Description:
Write a script that compiles a C file and creates an executable named cisfun.

📂 File: 3-name

4. Hello, puts
📌 Description:
Write a C program that prints:

c
Copier
Modifier
"Programming is like building a multilingual puzzle"
Use puts
Do not use printf
Return 0
📂 File: 4-puts.c

5. Hello, printf
📌 Description:
Write a C program that prints:

c
Copier
Modifier
"with proper grammar, but the outcome is a piece of art,"
Use printf
Do not use puts
Return 0
📂 File: 5-printf.c

6. Size is not grandeur, and territory does not make a nation
📌 Description:
Write a C program that prints the size of various data types:

char
int
long int
long long int
float
Return 0
📂 File: 6-size.c

Usage
Checking Code Style with Betty
Install Betty:
bash
Copier
Modifier
git clone https://github.com/holbertonschool/Betty.git
cd Betty
sudo ./install.sh
Run Betty on a C file:
bash
Copier
Modifier
betty my_file.c
Compiling a C File
bash
Copier
Modifier
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 my_file.c -o my_program
./my_program
Running a Shell Script
bash
Copier
Modifier
chmod u+x script.sh
./script.sh
Author
Project developed as part of the Holberton School curriculum.

yaml
Copier
Modifier

---

✅ **Now all tasks are formatted in proper Markdown!** 🚀  
I've **bolded** the titles, **added emojis** for clarity, and used a **clear separation** for each task.  
I'll **keep this format** for all future **README.md** files.
