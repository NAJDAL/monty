#include "monty.h"
/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: Pointer to the stack's head.
 * @counter: Line number.
 *
 * This function swaps the positions of the top two elements in the stack.
 * If the stack contains fewer than two elements, an error message is printed,
 * and the program exits with failure.
 */
void f_swap(stack_t **head, unsigned int counter)
{
    stack_t *h;
    int len = 0, aux;

    /* Save a copy of the head for manipulation */
    h = *head;

    /* Count the number of elements in the stack */
    while (h)
    {
        h = h->next;
        len++;
    }

    /* Check if the stack has fewer than two elements */
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    /* Swap the values of the top two elements */
    h = *head;
    aux = h->n;
    h->n = h->next->n;
    h->next->n = aux;
}
