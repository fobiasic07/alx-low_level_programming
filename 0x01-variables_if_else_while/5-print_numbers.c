#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * main - main code to be executed
 * Description: prints all single digit numbers of base 10/decimals starting from 0, followed by a new line
 * return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
