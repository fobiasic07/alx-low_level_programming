#include "main.h"
/*
 * print_rev - prints reversed string, with a newline
 * Description: prints the string from behind
 * @s: points to string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');

}
