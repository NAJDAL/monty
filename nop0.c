#include "monty.h"

/**
 * f_nop - Does nothing; a placeholder opcode.
 * @head: Pointer to the stack head.
 * @counter: Line number for error reporting.
 *
 * This function serves as a placeholder opcode that does nothing.
 * It is used to maintain the integrity of line numbers during execution.
 */
void f_nop(stack_t **head, unsigned int counter)
{
    (void)head;
    (void)counter;
}
