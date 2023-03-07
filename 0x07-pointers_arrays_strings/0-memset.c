#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @s: The starting address of the memory to be filled
 * @b: The constant byte
 * @n: Number of bytes to be changed
 * Return: chaged array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; n++)
	{
		s[i] = b;
		n--;
	}
	putchar('\n');
	return (s);
}
