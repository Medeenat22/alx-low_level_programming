#include "main.h"

/**
 * print_most_numbers - checks for a digit 0 through 9
 * Return: 0 always
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
	if (a != 50)
	{
	if (a != 52)
	{
	_putchar(a);
	}
	}
	}
_putchar('\n');
}
