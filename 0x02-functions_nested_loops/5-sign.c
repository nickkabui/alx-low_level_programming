#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to be checked
 * Returns: 1 for a positive num -1 for a negative num or zero if anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

