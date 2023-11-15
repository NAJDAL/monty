#include "monty.h"

/* Global variable to manage interpreter state */
bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - Monty code interpreter
 * @argc: Number of arguments
 * @argv: Monty file location
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    char *content;
    FILE *file;
    size_t size = 0;
    ssize_t read_line = 1;
    stack_t *stack = NULL;
    unsigned int counter = 0;

    /* Validate the number of command-line arguments */
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    /* Open the Monty file for reading */
    file = fopen(argv[1], "r");
    bus.file = file;

    /* Check if the file opening was successful */
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    /* Read and execute each line from the Monty file */
    while (read_line > 0)
    {
        content = NULL;
        read_line = getline(&content, &size, file);
        bus.content = content;
        counter++;

        /* Execute the Monty code if a valid line is read */
        if (read_line > 0)
        {
            execute(content, &stack, counter, file);
        }

        free(content);
    }

    /* Clean up and close the file */
    free_stack(stack);
    fclose(file);

    return (0);
}
