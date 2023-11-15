#include "monty.h"

/**
 * f_pop - Removes the top element from the stack.
 * @head: Pointer to the stack head.
 * @counter: Line number for error reporting.
 *
 * This function removes the top element from the stack. If the stack is
 * empty, it prints an error message and exits with a failure status.
 */
void f_pop(stack_t **head, unsigned int counter)
{
    stack_t *h;

    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    h = *head;
    *head = h->next;
    free(h);
}
