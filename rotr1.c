#include "monty.h"
/**
 * f_rotr - Rotates the stack to move the bottom element to the top.
 * @head: Pointer to the stack's head.
 * @counter: Line number (unused).
 *
 * This function rotates the stack in a circular manner, moving the bottom
 * element to the top while preserving the order of other elements.
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
    stack_t *copy;

    /* Store a copy of the current head for manipulation */
    copy = *head;

    /* Check if the stack is empty or has only one element */
    if (*head == NULL || (*head)->next == NULL)
    {
        return;
    }

    /* Traverse the stack to find the last element */
    while (copy->next)
    {
        copy = copy->next;
    }

    /* Connect the last element to the original head to move it to the top */
    copy->next = *head;
    copy->prev->next = NULL;
    copy->prev = NULL;

    /* Update the head to point to the new front element */
    (*head)->prev = copy;
    (*head) = copy;
}
