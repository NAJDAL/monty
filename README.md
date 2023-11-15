# 0x19. C - Stacks, Queues - LIFO, FIFO

## Project Overview
The project centers around the development of a Monty ByteCode interpreter, a scripting language similar to Python. The interpreter reads bytecode files, executing commands specified within them. Monty 0.98 relies on a unique stack, featuring specific instructions for manipulation.

## Monty Language Specifications
Monty 0.98 scripts are compiled into Monty byte codes. These codes, often denoted by the .m extension, adhere to a standard where each line contains at most one instruction. The opcode and its argument can be preceded or followed by any number of spaces.

## Project Objectives
1. Understand the concepts of LIFO and FIFO.
2. Grasp the usage of stacks and queues, along with their common implementations and use cases.
3. Implement global variables judiciously.
4. Utilize specified data structures, including `struct stack_s` and `struct instruction_s`.

## Project Resources
- [Difference between Stack and Queue Data Structures](#)
- [General Requirements](#)

## Allowed Editors
- vi, vim, emacs

## Compilation Process
All source files are compiled on Ubuntu 20.04 LTS using the gcc compiler with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`. Each source file concludes with a new line.

## File Structure
1. `stack.h`: A header file containing struct definitions and function prototypes.
2. `00.m`, `07.m`, `09.m`: Example Monty byte code files.
3. `monty.c`: The main file housing the interpreter logic.

## Compilation & Output
The project's codebase is compiled using the command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

Standard output captures regular program output, while standard error conveys error messages.

Examples
Example 1: 
$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
$ ./monty bytecodes/00.m
3
2
1

Example 2:

$ cat bytecodes/07.m
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
$ ./monty bytecodes/07.m
3
2
1
2
1
1



2 / 2

Certainly! Here's a professional rewrite of the provided code documentation:

plaintext

Copy code
# 0x19. C - Stacks, Queues - LIFO, FIFO

## Project Overview
The project centers around the development of a Monty ByteCode interpreter, a scripting language similar to Python. The interpreter reads bytecode files, executing commands specified within them. Monty 0.98 relies on a unique stack, featuring specific instructions for manipulation.

## Monty Language Specifications
Monty 0.98 scripts are compiled into Monty byte codes. These codes, often denoted by the .m extension, adhere to a standard where each line contains at most one instruction. The opcode and its argument can be preceded or followed by any number of spaces.

## Project Objectives
1. Understand the concepts of LIFO and FIFO.
2. Grasp the usage of stacks and queues, along with their common implementations and use cases.
3. Implement global variables judiciously.
4. Utilize specified data structures, including `struct stack_s` and `struct instruction_s`.

## Project Resources
- [Difference between Stack and Queue Data Structures](#)
- [General Requirements](#)

## Allowed Editors
- vi, vim, emacs

## Compilation Process
All source files are compiled on Ubuntu 20.04 LTS using the gcc compiler with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`. Each source file concludes with a new line.

## File Structure
1. `stack.h`: A header file containing struct definitions and function prototypes.
2. `00.m`, `07.m`, `09.m`: Example Monty byte code files.
3. `monty.c`: The main file housing the interpreter logic.

## Compilation & Output
The project's codebase is compiled using the command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
Standard output captures regular program output, while standard error conveys error messages.

Examples
Example 1:

bash
Copy code
$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
$ ./monty bytecodes/00.m
3
2
1
Example 2:

bash
Copy code
$ cat bytecodes/07.m
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
$ ./monty bytecodes/07.m
3
2
1
2
1
1
Example 3:

$ cat bytecodes/09.m
push 1
push 2
push 3
pall
swap
pall
$ ./monty bytecodes/09.m
3
2
1
2
3
1


Note: Monty byte code files may contain blank lines, which are disregarded during interpretation.


This revised documentation provides a comprehensive and professional overview of the project, including key sections such as project objectives, resources, file structure, compilation instructions, and examples.

Authors 
ENG. NAJD ALEID  LINK https://github.com/NAJDAL/monty
