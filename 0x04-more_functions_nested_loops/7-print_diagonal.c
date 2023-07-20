#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of time charcter \ should be printed
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_purchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_puthcar(' ');
			_putchar(92);
			_puthcar('\n');
		}
	}
}
