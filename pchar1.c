#include "monty.h"

/**
 * f_pchar - Prints the character at the top of the stack followed by a newline.
 * @head: Pointer to the stack head.
 * @counter: Line number for error reporting.
 *
 * This function prints the character at the top of the stack. If the stack is
 * empty, it prints an error message and exits with a failure status. If the
 * value at the top of the stack is outside the ASCII range, it prints an
 * error message and exits with a failure status.
 */
void f_pchar(stack_t **head, unsigned int counter)
{
    stack_t *h;

    h = *head;
    if (!h)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    if (h->n > 127 || h->n < 0)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    printf("%c\n", h->n);
}
