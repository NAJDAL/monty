#include "monty.h"

/**
 * f_pall - Print the elements of the stack.
 * @head: Pointer to the stack's head.
 * @counter: Unused parameter.
 *
 * Return: No return value.
 */
void f_pall(stack_t **head, unsigned int counter)
{
    stack_t *current;
    (void)counter;

    current = *head;

    /* Check if the stack is empty */
    if (current == NULL)
        return;

    /* Print each element in the stack */
    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
