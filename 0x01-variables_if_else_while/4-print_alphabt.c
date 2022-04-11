#include <stdio.h>
/*
 * main - main code to be executed
 * Description: Gives a random number and compares its last digit with 5
 * Return: 0
 **/
 int main(void)
 {
	 char c = 'a';

	 while (c <= 'z')
	 {
		 if (c != 'e' && c != 'q')
		 {
			 putchar(c);
		 }
		 c++;
	 }

	 putchar('\n');
	 return (0);
 }
