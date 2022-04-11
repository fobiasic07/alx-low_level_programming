#include <stdio.h>
#include <stdlib.h>
/*
 * main - main code to be executed
 * Description: Gives a random number and compares its last digit to 5
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

	putchar('\n');
	return (0);
}
