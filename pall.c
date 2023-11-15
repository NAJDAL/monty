#include "monty.h"

/**
 * f_pall - Prints the elements of the stack.
 * @head: Pointer to the stack's head.
 * @counter: Unused parameter.
 *
 * This function prints the elements of the stack starting from the top.
 * The parameter 'counter' is not utilized in this function.
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	(void)(line_number);

	head = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
		{
			return;
		}
	}
}
