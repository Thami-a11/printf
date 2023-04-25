#include "main.h"

/**
 * print_string - string
 * @list: args list.
 *
 * Return: length.
*/


int print_string(va_list args)
{
	char *c;

	int len;

	c = va_arg(args, char*);
	len = print((c != NULL) ? c : "(null)");

	return (len);
}
