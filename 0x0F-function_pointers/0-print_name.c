#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name from a function pointer
 * @name: char string for print
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	else
		f(name);
}
