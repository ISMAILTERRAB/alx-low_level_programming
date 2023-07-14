#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
