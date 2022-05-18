#include <stdio.h>
#include "function_pointers.h"

/*
 * print_name -prints name within function
 * @name: name in function
 * @f: function that is void
 * return: nothing or void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
