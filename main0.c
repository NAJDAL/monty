#include "monty.h"

/**
 * bus - Global structure to store essential variables for Monty interpreter.
 */
bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - Entry point for the Monty code interpreter.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * This function reads a Monty bytecode file, executes the specified operations,
 * and prints any errors encountered during the interpretation process.
 *
 * Return: Returns 0 on successful execution.
 */
int main(int argc, char *argv[])
{
    char *content;
    FILE *file;
    size_t size = 0;
    ssize_t read_line = 1;
    stack_t *stack = NULL;
    unsigned int counter = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    bus.file = file;

    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (read_line > 0)
    {
        content = NULL;
        read_line = getline(&content, &size, file);
        bus.content = content;
        counter++;

        if (read_line > 0)
        {
            execute(content, &stack, counter, file);
        }

        free(content);
    }

    free_stack(stack);
    fclose(file);
    return (0);
}