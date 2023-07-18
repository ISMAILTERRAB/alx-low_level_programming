#include "main.h"

/**
 * _isalpha - checks if charcter is a letter lowercase or uppercase
 *
 * @c: character in ASCII code
 *
 * Return: 1 if 'c' is letter lowercase or uppercase otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
