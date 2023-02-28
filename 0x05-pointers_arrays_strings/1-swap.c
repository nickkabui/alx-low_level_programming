#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: The first number to swap
 * @b: The second number to swap
 * Return: The value
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
