#include "monty.h"

/**
 * free_stack - Frees the memory allocated for a doubly linked list.
 * @head: Pointer to the head of the stack.
 *
 * This function traverses the doubly linked list starting from the given head
 * and frees the memory for each node in the stack.
 */
void free_stack(stack_t *head)
{
    stack_t *aux;

    aux = head;
    while (head)
    {
        aux = head->next;
        free(head);
        head = aux;
    }
}
