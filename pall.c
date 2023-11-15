#include "monty.h"

/**
 * f_push - Adds a node to the stack.
 * @head: Pointer to the stack's head.
 * @counter: Line number.
 *
 * This function adds a new node to the stack with the integer value extracted
 * from the global variable 'bus.arg'. If 'bus.arg' is not a valid integer,
 * an error message is displayed, and the program exits with failure.
 */
void f_push(stack_t **head, unsigned int counter)
{
    int n, j = 0, flag = 0;

    /* Check if 'bus.arg' is provided */
    if (bus.arg)
    {
        /* Handle negative sign */
        if (bus.arg[0] == '-')
            j++;

        /* Validate that 'bus.arg' is a valid integer */
        for (; bus.arg[j] != '\0'; j++)
        {
            if (bus.arg[j] > 57 || bus.arg[j] < 48)
                flag = 1;
        }

        /* Display error and exit if 'bus.arg' is not a valid integer */
        if (flag == 1)
        {
            fprintf(stderr, "L%d: usage: push integer\n", counter);
            fclose(bus.file);
            free(bus.content);
            free_stack(*head);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        /* Display error and exit if 'bus.arg' is not provided */
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    /* Convert 'bus.arg' to an integer */
    n = atoi(bus.arg);

    /* Add the integer to the stack or queue based on the value of 'bus.lifi' */
    if (bus.lifi == 0)
        addnode(head, n);
    else
        addqueue(head, n);
}
