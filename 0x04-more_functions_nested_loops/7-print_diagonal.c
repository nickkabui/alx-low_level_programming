#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times to draw a diagnal line
 * Return: empty
 */
void print_diagonal(int n)
{
	int m, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (m = 0; m < n; m++)
	{
		for (p = 0; p < m; p++)
		{
			_putchar(32);
		}
			_putchar(92);
			_putchar('\n');
		}
		}
}

