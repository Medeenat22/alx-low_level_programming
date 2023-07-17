#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints alphabets
 * Return: 0 is success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'o' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
