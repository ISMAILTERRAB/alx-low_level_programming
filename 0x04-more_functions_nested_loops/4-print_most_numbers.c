#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9 except 2 & 4
 *
 * Return; always 0
*/

void print_most_numbers(void)
{
	int num;
		for (num = 0; num <= 9; num++)
		{
			if (num == 2 || num == 4)
				continue;
			_putchar(num + 48);
		}
		_putchar('\n');
}
