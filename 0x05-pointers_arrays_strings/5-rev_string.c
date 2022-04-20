#include "main.h"
/*
 * rev-string - prints reversed string with a new line following it
 * @s: points to the string to be printed
 * Return: void
 */

void rev_string(char *s)
{
	int len, i, half;
	char temp;

	for(len = 0; s[len] != '\0'; len++)
		;
	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}

}
