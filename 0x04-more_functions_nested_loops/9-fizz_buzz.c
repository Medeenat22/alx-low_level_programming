#include <stdio.h>

/**
 * main - prints the no from 1-100 but for multiple of three
 * Fizz is printed instead of the number for multiple of five
 * Buzz for multiple of both three and five
 * FizzBuzz
 * Return: 0 always
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
