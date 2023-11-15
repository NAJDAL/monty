#include "monty.h"
/**
 * f_sub - Subtracts the top element of the stack from the second element.
 * @head: Pointer to the stack's head.
 * @counter: Line number.
 *
 * This function performs subtraction on the top two elements of the stack,
 * replacing the top element with the result. If the stack contains fewer than
 * two elements, an error message is printed, and the program exits with failure.
 */
void f_sub(stack_t **head, unsigned int counter)
{
    stack_t *aux;
    int result, nodes;

    /* Save a copy of the head for manipulation */
    aux = *head;

    /* Count the number of elements in the stack */
    for (nodes = 0; aux != NULL; nodes++)
        aux = aux->next;

    /* Check if the stack has fewer than two elements */
    if (nodes < 2)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    /* Perform subtraction on the top two elements */
    aux = *head;
    result = aux->next->n - aux->n;
    aux->next->n = result;
    *head = aux->next;

    /* Free the original top element */
    free(aux);
}
