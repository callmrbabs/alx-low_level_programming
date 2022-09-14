#include "main.h"

/**
 * int print_last_digit -  prints the last digit of a number
 * @n: n is an integer
 *
 * Description :  prints the last digit of a number
 * Return: Always 0.
 */

int print_last_digit(int n)
{
int last = n % 10;

if (n < 0)
last = last * -1;
_putchar(last + '0');
return (last);
}
