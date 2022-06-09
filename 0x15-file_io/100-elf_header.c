#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: the arguments as pointers to pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	(void)argv;
	return (0);
}
