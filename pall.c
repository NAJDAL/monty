#include "monty.h"

/**
 * f_pall - Prints the elements of the stack.
 * @head: Pointer to the stack's head.
 * @counter: Unused parameter.
 *
 * This function prints the elements of the stack starting from the top.
 * The parameter 'counter' is not utilized in this function.
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
