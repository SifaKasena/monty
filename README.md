# 0x19. C - Stacks, Queues - LIFO, FIFO
This project aims to teach by practice the use cases of Stack and Queue data structures and how to implement them.
It does so by engaging the students to create an interpreter for monty bytecodes which requires a unique stack and specific instructions to manipulate it.
>Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.
>
>**Monty byte code files**
>
>Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument.
>Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account.

## Table of Content
- [Progress](#progress)
- [Resources](#resources)
- [Files](#files)
- [Tasks](#tasks)
  - [Mandatory Tasks](#mandatory-tasks)
  - [Advanced Tasks](#advanced-tasks)
- [Authors](#authors)

## Progress
- [x] Mandatory Tasks
  - [x] Task 0
  - [x] Task 1
  - [x] Task 2
  - [x] Task 3
  - [x] Task 4
  - [x] Task 5
- [ ] Advanced Tasks
  - [x] Task 6
  - [x] Task 7
  - [x] Task 8
  - [x] Task 9
  - [x] Task 10
  - [x] Task 11
  - [x] Task 12
  - [x] Task 13
  - [x] Task 14
  - [x] Task 15
  - [x] Task 16
  - [x] Task 17
  - [x] Task 18
  - [ ] Task 19

## Resources
> - [First resource]()

## Files

FILE | DESCRIPTION
--- | ---
[`main.c`](https://github.com/SifaKasena/monty/blob/main/main.c) | The entry point of our monty program.
[`interpret.c`](https://github.com/SifaKasena/monty/blob/main/interpret.c) | Holds the function implementing the continuous loop to interpret a monty bytecode file.
[`get_op_func.c`](https://github.com/SifaKasena/monty/blob/main/get_op_func.c) | A C function to fetch the correct function for a specific opcode.
[`operations.c`](https://github.com/SifaKasena/monty/blob/main/operations.c) | Functions for opcodes: push, pall, pint, pop and swap.
[`operations_1.c`](https://github.com/SifaKasena/monty/blob/main/operations_1.c) | Functions for opcodes: add, nop, sub, div and mul.
[`operations_2.c`](https://github.com/SifaKasena/monty/blob/main/operations_2.c) | Functions for opcodes: mod, pchar, pstr, rotl and rotr.
[`operations_3.c`](https://github.com/SifaKasena/monty/blob/main/operations_3.c) | Functions for opcodes: stack, queue and revp.
[`list_func.c`](https://github.com/SifaKasena/monty/blob/main/list_func.c) | Functions to manipulate a doubly linked list
[`helpers.c`](https://github.com/SifaKasena/monty/blob/main/helpers.c) | Helper functions for the program
[`monty.h`](https://github.com/SifaKasena/monty/blob/main/monty.h) | Our header file containing all function, struct and global variables definitions.

## Tasks
### Mandatory Tasks
0. #### push, pall
> Implement the push and pall opcodes.
>
>**The push opcode**
>
>The opcode push pushes an element to the stack.
>
>Usage: push \<int\>
>
>**The pall opcode**
>
>The opcode pall prints all the values on the stack, starting from the top of the stack.
>
>Usage pall
>
>If the stack is empty, don’t print anything

1. #### pint
>Implement the pint opcode.
>
>The pint opcode
>
>The opcode pint prints the value at the top of the stack, followed by a new line.

### Advanced Tasks
1. #### Test
> Task description

2. #### Test
> Task description

## Authors
- Github - [SifaKasena](https://github.com/SifaKasena)
- Twitter - [@Username]()
- Linkedin - [@Username]()
- Medium - [User Name]()
- Github - [omitogunjesufemi](https://github.com/omitogunjesufemi)
- Twitter - [@Username]()
- Linkedin - [@Username]()
- Medium - [User Name]()
