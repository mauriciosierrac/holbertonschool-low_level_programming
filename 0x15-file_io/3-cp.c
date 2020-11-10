#include "holberton.h"

/**
 *  main - copy text file in another file
 * @argc: lenght of arguments
 * @argv: parameters
 * Return: 0
 */

int main(int argc, char **argv)
{
	int f1, f2, rf1, wf2;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
		return (-1);

	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f2 == -1)
		return (-1);

	while (rf1 == 1024)
	{
		rf1 = read(f1, buf, 1024);
		wf2 = write(f1, buf, rf1);
	}

	if (rf1 == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]), exit(98);
	}

	if (wf2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(f1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);

	if (close(f2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);

	return (0);
}
