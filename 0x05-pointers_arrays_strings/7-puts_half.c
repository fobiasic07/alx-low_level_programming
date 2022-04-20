#include "main.h"
/*
 * puts_half - prints the second half of a string
 * @str: points to the char array string type
 * Description: If odd number, print (len - 1) / 2
 * return: void
 */

void puts_half(char *str)
{
	int i;

	for(i = 0; str[i] != '\0'; i++)
		;
	for(i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
