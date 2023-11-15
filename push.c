#include "monty.h"

/**
 * f_push - Adds a node to the stack.
 * @head: Double pointer to the stack's head.
 * @counter: Line count.
 *
 * This function adds a new node to the stack with the integer value extracted
 * from the global variable 'bus.arg'. If 'bus.arg' is not a valid integer,
 * an error message is displayed, and the program exits with failure.
 */
void f_push(stack_t **head, unsigned int counter)
{
    int i, m = 0, flag = 0;

    /* Check if 'bus.arg' is provided */
    if (bus.arg)
    {
        /* Handle negative sign */
        if (bus.arg[0] == '-')
            m++;

        /* Validate that 'bus.arg' is a valid integer */
        for (; bus.arg[m] != '\0'; m++)
        {
            if (bus.arg[m] > 57 || bus.arg[m] < 48)
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
    i = atoi(bus.arg);

    /* Add the integer to the stack or queue based on the value of 'bus.lifi' */
    if (bus.lifi == 0)
        addnode(head, i);
    else
        addqueue(head, i);
}
