#include "main.h"

/**
 * _isdigit - check if c is digit between 0 & 9
 *
 * @c: input for digit
 *
 * Return: 1 if c is digit otherwise 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
