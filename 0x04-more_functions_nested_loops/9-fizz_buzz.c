#include "main.h"
#include <stdio.h>

/**
 * main - print numbers 1 - 100 followed by new line
 *	numbers that are multiples of 3 print Fizz
 *	numbers that are multiples of 5 print Buzz
 *	numbers that are multiples of 3 and 5 print FizzBuzz
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz");
		else if (num == 1)
			printf("%d", num);
		else
			printf(" %d", num);
	}
	printf('\n');

	return (0);
}
