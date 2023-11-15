#include "monty.h"
/**
 * f_rotl - Rotates the stack to bring the top element to the front.
 * @head: Pointer to the stack's head.
 * @counter: Line number (unused).
 *
 * This function rotates the stack in a circular manner, bringing the top
 * element to the front of the stack while maintaining the order of other
 * elements.
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
    stack_t *tmp = *head, *aux;

    /* Check if the stack is empty or has only one element */
    if (*head == NULL || (*head)->next == NULL)
    {
        return;
    }

    /* Move the second element to the front */
    aux = (*head)->next;
    aux->prev = NULL;

    /* Traverse the stack to find the last element */
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    /* Connect the last element to the original head */
    tmp->next = *head;
    (*head)->next = NULL;
    (*head)->prev = tmp;

    /* Update the head to point to the new front element */
    (*head) = aux;
}

