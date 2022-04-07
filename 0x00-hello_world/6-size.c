#include <stdio.h>

/* 
 * main - is run with the command sizeof() gives the size of item placed within the brackets
 * return:0 executes correctly if 0 is returned
 * */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return(0);
}
