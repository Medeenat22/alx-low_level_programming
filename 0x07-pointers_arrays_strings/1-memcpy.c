#include "main.h"

/**
 * _memcpy - the function copies @n bytes from memory area @src
 * to memory area @dest
 * @n: function to copy
 * @src: bytes from memory area
 * @dest: memory area
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
