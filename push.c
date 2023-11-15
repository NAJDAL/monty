#include "monty.h"
#include <ctype.h>

/**
 * check_for_digit - Checks that a string only contains digits.
 * @arg: String to check.
 *
 * Return: 0 if only digits, else 1.
 */
static int check_for_digit(char *arg)
{
    int i;

    for (i = 0; arg[i]; i++)
    {
        if (arg[i] == '-' && i == 0)
            continue;
        if (isdigit(arg[i]) == 0)
            return (1);
    }
    return (0);
}

/**
 * f_push - Pushes an integer onto the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Script line number.
 *
 * This function pushes an integer onto the stack. It extracts the integer
 * value from the string 'arg'. If 'arg' is not a valid integer, an error
 * message is displayed, and the program exits with failure.
 */
void f_push(stack_t **stack, unsigned int line_number)
{
    char *arg;
    int n;

    /* Extract the argument from the command */
    arg = strtok(NULL, "\n\t\r ");

    /* Check if 'arg' is not provided or not a valid integer */
    if (arg == NULL || check_for_digit(arg))
    {
        dprintf(STDOUT_FILENO,
                "L%u: usage: push integer\n",
                line_number);
        exit(EXIT_FAILURE);
    }

    /* Convert 'arg' to an integer */
    n = atoi(arg);

    /* Add the integer to the stack */
    if (!add_node(stack, n))
    {
        dprintf(STDOUT_FILENO, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    /* Update the stack length */
    var.stack_len++;
}
