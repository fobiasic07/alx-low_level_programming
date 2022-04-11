#include <stdio.h>
/*
 * main - Main code to be executed
 * Description: Prints the aphabets in lowercase then uppercase and followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar (c);
		c++
	}

	putchar('\n');
	return (0);
}
