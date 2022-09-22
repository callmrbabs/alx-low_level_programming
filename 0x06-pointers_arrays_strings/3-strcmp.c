#include "main.h"


/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second sring
 *
 * Return: 0 if equal or c if is not equal
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int c = 0;

	while (s1[a] != '\0' && c == 0)
	{
		c = s1[a] - s2[a];
		a++;
	}
	return (c);
}
