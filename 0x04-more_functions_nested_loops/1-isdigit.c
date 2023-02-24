#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The digit to be checked
 *
 * Return: 1 if Success, 0 if anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
		return (0);
}
