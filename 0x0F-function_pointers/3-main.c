#include "function_pointers.h"

/**
 * main - function that check code
 * @argc: lenght
 * @argv: array
 * Return: nothing
 */

int main(int argc, char *argv[])
{
int result;

if (argc == 4)
{
result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", result);
}
else
{
printf("Error\n");
exit(98);
}
return (0);
}
