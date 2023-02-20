#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a, c;

	for (a = '0'; a < '9'; a++)
	{

	for (c = a + 1; c <= '9'; c++)

	{
	if (c != a)
	{
	putchar(a);
	putchar(c);
	if (a == '8' && c == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
