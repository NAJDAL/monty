#include "monty.h"

/**
 * f_pall - Prints the elements of the stack.
 * @head: Pointer to the stack head.
 * @counter: Line number (not used).
 *
 * This function prints the elements of the stack. If the stack is empty,
 * it returns without printing anything.
 */
void f_pall(stack_t **head, unsigned int counter)
{
    stack_t *h;
    (void)counter;

    h = *head;
    if (h == NULL)
        return;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
}
