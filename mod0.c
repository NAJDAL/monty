#include "monty.h"

/**
 * f_mod - Computes the remainder of the division of the second
 * top element of the stack by the top element of the stack.
 * @head: Pointer to the stack head.
 * @counter: Line number for error reporting.
 *
 * This function calculates the modulo of the second top element by the
 * top element of the stack. If the stack contains fewer than two elements,
 * it prints an error message, closes the file associated with the Monty
 * interpreter, frees allocated memory, and exits with a failure status.
 * If the divisor is zero, it prints an error message and exits with a
 * failure status.
 */
void f_mod(stack_t **head, unsigned int counter)
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
        fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    h = *head;
    if (h->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    aux = h->next->n % h->n;
    h->next->n = aux;
    *head = h->next;
    free(h);
}
