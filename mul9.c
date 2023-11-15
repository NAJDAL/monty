#include "monty.h"

/**
 * f_mul - Multiplies the top two elements of the stack.
 * @head: Pointer to the stack head.
 * @counter: Line number for error reporting.
 *
 * This function multiplies the values of the top two elements on the stack.
 * If the stack contains fewer than two elements, it prints an error message,
 * closes the file associated with the Monty interpreter, frees allocated memory,
 * and exits with a failure status.
 */
void f_mul(stack_t **head, unsigned int counter)
{
    stack_t *h;
    int len = 0, aux;

    h = *head;
    while (h)
    {
        h = h->next;
        len++;
    }
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    h = *head;
    aux = h->next->n * h->n;
    h->next->n = aux;
    *head = h->next;
    free(h);
}
