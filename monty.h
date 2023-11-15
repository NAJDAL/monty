#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - Doubly linked list representation for stack (or queue)
 * @n: Integer value
 * @prev: Points to the previous element of the stack (or queue)
 * @next: Points to the next element of the stack (or queue)
 *
 * Description: This structure defines a doubly linked list node for stack and
 * queue operations in the context of a Holberton project.
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct bus_s - Variables carrying values through the program
 * @arg: Value
 * @file: Pointer to the Monty file
 * @content: Line content
 * @lifi: Flag to change stack <-> queue
 *
 * Description: This structure holds variables that are used to pass values
 * through the program execution.
 */
typedef struct bus_s
{
    char *arg;
    FILE *file;
    char *content;
    int lifi;
} bus_t;

extern bus_t bus;

/**
 * struct instruction_s - Opcode and its corresponding function
 * @opcode: The opcode
 * @f: Function to handle the opcode
 *
 * Description: This structure defines an opcode and its associated function
 * for stack, queues, LIFO, FIFO operations in a Holberton project.
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clean_line(char *content);

/* Function prototypes for various stack and queue operations */
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);

#endif
