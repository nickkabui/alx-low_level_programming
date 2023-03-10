#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset -  fills memory with a constant byte
 * @s: The starting address of the memory to be filled
 * @b: The constant byte
 * @n: Number of bytes to be changed
 * Return: chaged array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)

{
	return (memset(s, b, n));
}
