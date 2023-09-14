# 0x12-singly_linked_lists
## About the project:
This project is about learning C programming language and linked lists.

## Requirements:
* Ubuntu 14.04 LTS
* gcc 4.8.4
* no standard library functions
* allowed to use `_putchar`

## Things to learn
* What are linked lists
* When and why using linked lists vs arrays
* How to build and use linked lists

## Files
### [lists.h](./lists.h)
> Header file containing all function prototypes and data structures used in this project.
> * `int _putchar(char c);`
> * `size_t print_list(const list_t *h);`
> * `size_t list_len(const list_t *h);`
> * `list_t *add_node(list_t **head, const char *str);`
> * `list_t *add_node_end(list_t **head, const char *str);`
> * `void free_list(list_t *head);`

#### [0-print_list.c](./0-print_list.c)
> Function that prints all the elements of a `list_t` list.
> * Prototype: `size_t print_list(const list_t *h);`
> * Return: the number of nodes
> * Format: see example
> * If `str` is `NULL`, print `[0] (nil)`
> * You are allowed to use `printf`

#### [1-list_len.c](./1-list_len.c)
> Function that returns the number of elements in a linked `list_t` list.
> * Prototype: `size_t list_len(const list_t *h);`

#### [2-add_node.c](./2-add_node.c)
> Function that adds a new node at the beginning of a `list_t` list.
> * Prototype: `list_t *add_node(list_t **head, const char *str);`
> * Return: the address of the new element, or `NULL` if it failed
> * `str` needs to be duplicated
> * You are allowed to use `strdup`

#### [3-add_node_end.c](./3-add_node_end.c)
> Function that adds a new node at the end of a `list_t` list.
> * Prototype: `list_t *add_node_end(list_t **head, const char *str);`
> * Return: the address of the new element, or `NULL` if it failed
> * `str` needs to be duplicated
> * You are allowed to use `strdup`

#### [4-free_list.c](./4-free_list.c)
> Function that frees a `list_t` list.
> * Prototype: `void free_list(list_t *head);`

#### [100-first.c](./100-first.c)
> Function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.
> * You are allowed to use the `printf` function
> * You are not allowed to use `printf` function
> * You are not allowed to have any other function in your code than `main`
> * You are not allowed to have any loop in your code
> * You are not allowed to use `static` variables or have any string literals

#### [101-hello_holberton.asm](./101-hello_holberton.asm)
> 64-bit program in assembly that prints `Hello, Holberton` followed by a new line.
> * You are only allowed to use the `printf` function
> * You are not allowed to use interrupts
> * Your program will be compiled using `nasm` and `gcc`:
>   * `nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello`
> * You are not allowed to use any kind of loops
> * You are not allowed to use `global` variables
> * You are not allowed to use `malloc`/`free` or any other kind of dynamic memory allocation
> * You are allowed to use the `printf` function
> * You may use `exit` (0) in your code
> * The string to be printed is `Hello, Holberton`
> * Your program should crash gracefully if the string to be printed is bigger than 13 bytes long