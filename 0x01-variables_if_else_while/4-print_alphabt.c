#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase except q and e
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
			alphabet++;
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
