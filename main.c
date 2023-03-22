#include "monty.h"

int flag_stack = 0;

/**
 * main - The entry point of the monty interpreter
 * @argc: Argument count
 * @argv: Arguments containing the file path
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char **argv)
{
	FILE *file;
	stack_t *stack = NULL;

	if (argc < 2 || argc > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		error(stack);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		error(stack);
	}

	interpret_file(file, stack);
	fclose(file);

	return (EXIT_SUCCESS);
}
