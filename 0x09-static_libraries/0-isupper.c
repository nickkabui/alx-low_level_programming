#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * _isupper - Uppercase letters
 * @c: char to check
 * Return: 1 for uppercase letter or 0 for any else
 */

int _isupper(int c)
{
	return (isupper(c >= 'A' && c <= 'Z'));
}
