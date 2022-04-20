#include "main.h"
/*
 * puts2 - prints a string, followed by a new line
 * Description: prints a string
 * @str: points to the string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');

}
