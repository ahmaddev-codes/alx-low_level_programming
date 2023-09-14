# 0x017-DOUBLY_LINKED_LISTS
## About Doubly linked lists:
Doubly linked list is used in referencing a previous node and a next node in the list. It is a type of linked list in which each node apart from storing its data has two links. The first link points to the previous node in the list and the second link points to the next node in the list. The first node of the list has its previous link pointing to NULL similarly the last node of the list has its next node pointing to NULL. The two links help in traversing the list in both forward as well as backward direction. The following diagram shows a doubly linked list with 3 nodes.

![Doubly linked list](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL1.png)

### Advantages over singly linked list
1. A DLL can be traversed in both forward and backward direction.
2. The delete operation in DLL is more efficient if pointer to the node to be deleted is given.
3. We can quickly insert a new node before a given node.
4. In singly linked list, to delete a node, pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using previous pointer.

### Disadvantages over singly linked list
1. Every node of DLL Require extra space for an previous pointer. It is possible to implement DLL with single pointer though (See this and this).
2. All operations require an extra pointer previous to be maintained. For example, in insertion, we need to modify previous pointers together with next pointers. For example in following functions for insertions at different positions, we need 1 or 2 extra steps to set previous pointer.

### Applications of doubly linked list
1. Doubly Linked Lists are used for implementation of stacks, queues, etc. Doubly Linked List is a generalized version of Linked List where traversal can be done in both ways, either forward and backward direction.
2. The two pointers next and previous in DLL require extra space for storage.
3. Insertion and deletion of nodes take 1 extra step, unlike in singly linked list where it takes 2 steps.
4. All operations require an extra pointer previous to be maintained. For example, in insertion, we need to modify previous pointers together with next pointers. For example in following functions for insertions at different positions, we need 1 or 2 extra steps to set previous pointer.

### Project intended to learn:
- What is a doubly linked list
- How to use doubly linked lists
- Start to look for the right source of information without too much help

## Requirements:
- Ubuntu 14.04 LTS
- gcc 4.8.4

## Files
### [0-print_dlistint.c](./0-print_dlistint.c)
> function that prints all the elements of a dlistint_t list.
> * Prototype: size_t print_dlistint(const dlistint_t *h);
> * Return: the number of nodes
> * Format: see example
> * You are allowed to use printf
### [1-dlistint_len.c](./1-dlistint_len.c)
> function that returns the number of elements in a linked dlistint_t list.
> * Prototype: size_t dlistint_len(const dlistint_t *h);
### [2-add_dnodeint.c](./2-add_dnodeint.c)
> function that adds a new node at the beginning of a dlistint_t list.
> * Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
> * Return: the address of the new element, or NULL if it failed
### [3-add_dnodeint_end.c](./3-add_dnodeint_end.c)
> function that adds a new node at the end of a dlistint_t list.
> * Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
> * Return: the address of the new element, or NULL if it failed
### [4-free_dlistint.c](./4-free_dlistint.c)
> function that frees a dlistint_t list.
> * Prototype: void free_dlistint(dlistint_t *head);
### [5-get_dnodeint.c](./5-get_dnodeint.c)
> function that returns the nth node of a dlistint_t linked list.
> * Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
> * where index is the index of the node, starting from 0
> * if the node does not exist, return NULL
### [6-sum_dlistint.c](./6-sum_dlistint.c)
> function that returns the sum of all the data (n) of a dlistint_t linked list.
> * Prototype: int sum_dlistint(dlistint_t *head);
> * if the list is empty, return 0
### [7-insert_dnodeint.c](./7-insert_dnodeint.c)
> function that inserts a new node at a given position.
> * Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
> * where idx is the index of the list where the new node should be added. Index starts at 0
> * Returns: the address of the new node, or NULL if it failed
> * if it is not possible to add the new node at index idx, do not add the new node and return NULL
### [8-delete_dnodeint.c](./8-delete_dnodeint.c)
> function that deletes the node at index index of a dlistint_t linked list.
> * Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
> * where index is the index of the node that should be deleted. Index starts at 0
> * Returns: 1 if it succeeded, -1 if it failed

## Advanced Tasks:
### [100-password](./100-password)
> Find the password for crackme4.
> * Save the password in the file 100-password
> * Your file should contain the exact password, no new line, no extra space
> * Hint: The program prints “OK” when the password is correct
### [102-result](./102-result)
> Find the largest palindrome made from the product of two 3-digit numbers.
> * Save the result in the file 102-result
> * Your file should contain the exact result, no new line, no extra space
### [103-keygen.c](./103-keygen.c)
> Write a keygen for crackme5.
> * Usage of the crackme: ./crackme5 username key
> * The crackme will segfault if you do not enter the correct key for the user
> * Usage for your keygen: ./keygen5 username
> * Your keygen should print a valid key for the username
> * You are allowed to use the standard library
