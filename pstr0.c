#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack,
 * followed by a newline.
 * @head: Pointer to the stack head.
 * @counter: Line number (not used).
 *
 * This function prints the string represented by the ASCII values
 * starting from the top of the stack. It stops printing when it
 * encounters a non-printable character or a zero value.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
    stack_t *h;
    (void)counter;

    h = *head;
    while (h)
    {
        if (h->n > 127 || h->n <= 0)
        {
            break;
        }
        printf("%c", h->n);
        h = h->next;
    }
    printf("\n");
}
