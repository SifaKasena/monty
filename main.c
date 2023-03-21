#include "monty.h"

/**
 * main - The entry point of the monty interpreter
 * @argc: Argument count
 * @argv: Arguments containing the file path
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char **argv)
{
	FILE *file;

	if (argc < 2 || argc > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	interpret_file(file);
	fclose(file);

	return (EXIT_SUCCESS);
}
