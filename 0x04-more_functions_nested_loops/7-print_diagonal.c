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
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92); /*is equel to '/' char*/
			_putchar('\n');
		}
	}
}
