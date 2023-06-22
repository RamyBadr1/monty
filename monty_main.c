#include "monty.h"

char **op_toks = NULL;

/**
 * main - the entry point for Interperter
 * @argc: argv length
 * @argv: args array
 * Return: EXIT_SUCCESS on success || EXIT_FAILURE on error
 */
int main(int argc, char **argv)
{
	FILE *fd = NULL;

	if (argc != 2)
		return (usage_error());
		
	fd = fopen(argv[1], "r");
	
	if (!fd)
		return (f_open_error(argv[1]));
		
	exit_code = run_monty(fd);
	fclose(fd);
	
	return (EXIT_SUCCESS);
}
