#include "main.h"

/**
 * _isupper - Uppercase letters
 * @c: char to check
 * Return: 1 for uppercase letter or 0 for any else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
