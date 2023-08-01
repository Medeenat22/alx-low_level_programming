#include "main.h"

/**
 * _memset - it fills the memory with a constant byte
 * @s: the memory area to be filled
 * @b: char to be copied
 * @n: the number of times to copy b
 * Return: pointer should be returned to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
