#include "main.h"

/**
 * print_numbers - checks for a digit (0 through 9)
 * Return: 0 always
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
