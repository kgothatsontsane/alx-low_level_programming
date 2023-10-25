include "function_pointers.h"

/**
 * print_name - print a name from a function pointer
 * @name: char string for print
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
