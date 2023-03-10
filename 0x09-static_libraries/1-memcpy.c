#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * _memcpy - copies memory area
 * @dest: the memory area is stored
 * @src: the memory area is copied
 * @n: value of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
