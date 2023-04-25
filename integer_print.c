#include "main.h"

/**
 * print_integer - Print a number
 * @args: args list of Number
 *
 * Return: Length
 **/

int print_integer(va_list args)
{
	char *p;
	int s;

	p = itoa(va_arg(args, int), 10);

	s = print((p != NULL) ? p : "NULL");

	return (s);
}
