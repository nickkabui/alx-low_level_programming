#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: imput
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
