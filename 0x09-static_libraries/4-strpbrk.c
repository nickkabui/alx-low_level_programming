#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
