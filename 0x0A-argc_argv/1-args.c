#include <stdio.h>

/**
 * main - function that prints the number.
 * @argc: is an argument counter for char
 * @argv: is an argument value for char.
 * Return: Return always success.
**/

int main(int argc, char argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
