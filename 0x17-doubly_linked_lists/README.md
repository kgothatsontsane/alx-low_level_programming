# C - Doubly Linked Lists

This project involved the utilization of doubly-linked lists in the C programming language.

## Header File 📁

* [lists.h](./lists.h): Header file that encompasses definitions and prototypes for various types and functions developed for this project.

| Type/File           | Definition/Prototype           |
| ------------------- | ------------------------------ |
| `struct dlistint_s`    | <ul><li>`int n`</li><li>`struct dlistint_s *prev`</li><li>`struct dlistint_s *next`</li></ul> |
| `typedef dlistint_t`   | `struct dlistint_s`                                                                          |
| `0-print_dlistint.c`   | `size_t print_dlistint(const dlistint_t *h);`                                                |
| `1-dlistint_len.c`     | `size_t dlistint_len(const dlistint_t *h);`                                                  |
| `2-add_dnodeint.c`  | `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`                                     |
| `3-add_dnodeint_end.c` | `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`                              |
| `4-free_dlistint.c`    | `void free_dlistint(dlistint_t *head);`                                                      |
| `5-get_dnodeint.c`     | `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`                   |
| `6-sum_dlistint.c`     | `int sum_dlistint(dlistint_t *head);`                                                        |
| `7-insert_dnodeint.c`  | `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`             |
| `8-delete_dnodeint.c`  | `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`                       |

## Project Tasks 📃

* **Task 0: Print List**
  * [0-print_dlistint.c](./0-print_dlistint.c): C function designed to print all elements of a doubly-linked `dlistint_t` list.
  * Returns the count of nodes in the list.

* **Task 1: List Length**
  * [1-dlistint_len.c](./1-dlistint_len.c): C function that returns the number of nodes in a doubly-linked `dlistint_t` list.

* **Task 2: Add Node**
  * [2-add_dnodeint.c](./2-add_dnodeint.c): C function responsible for adding a new node at the beginning of a doubly-linked `dlistint_t` list.
  * Returns `NULL` in case of failure, otherwise provides the address of the new element.

* **Task 3: Add Node at the End**
  * [3-add_dnodeint_end.c](./3-add_dnodeint_end.c): C function to add a new node at the end of a doubly-linked `dlistint_t` list.
  * Returns `NULL` on failure, otherwise, provides the address of the new element.

* **Task 4: Free List**
  * [4-free_dlistint.c](./4-free_dlistint.c): C function for freeing a doubly-linked `dlistint_t` list.

* **Task 5: Get Node at Index**
  * [5-get_dnodeint.c](./5-get_dnodeint.c): C function that locates a specified node in a doubly-linked `dlistint_t` list.
  * Returns `NULL` if the node does not exist, otherwise provides the address of the located node.

* **Task 6: Sum List**
  * [6-sum_dlistint.c](./6-sum_dlistint.c): C function to calculate the sum of all data (`n`) in a doubly-linked `dlistint_t` list.
  * Returns `0` if the list is empty, otherwise provides the sum.

* **Task 7: Insert at Index**
  * [7-insert_dnodeint.c](./7-insert_dnodeint.c): C function to insert a new node at a specified position in the list.
  * Returns `NULL` on failure, otherwise, provides the address of the new element.
  * Compilation requires functions defined in [2-add_dnodeint.c](./2-add_dnodeint.c) and [3-add_dnodeint_end.c](./3-add_dnodeint_end.c).

* **Task 8: Delete at Index**
  * [8-delete_dnodeint.c](./8-delete_dnodeint.c): C function for deleting the node at a specified index in a doubly-linked `dlistint_t` list.
  * Returns `-1` on failure, otherwise returns `1`.

* **Task 9: Crackme4**
  * [100-password](./100-password): Text file containing the password for the [crackme4](https://github.com/alx-tools/0x17.c.

* **Task 10: Palindromes**
  * [102-result](./102-result): Text file with the largest palindrome derived from the product of two three-digit numbers.

* **Task 11: Crackme5**
  * [103-keygen.c](./103-keygen.c): C function generating passwords for the [crackme5](https://github.com/alx-tools/0x17.c.
  * Usage: `./crackme5 username key`
  * Usage of the keygen: `./keygen5 username`
