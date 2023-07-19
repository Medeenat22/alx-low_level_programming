#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @n: int to check
 * Return: the absolute value of int
 */

int _abs(int)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('_');
	}
	return (-1);
}
