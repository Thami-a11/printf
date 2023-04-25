
#include "main.h"

/**
 * print_char - print character.
 * @list: args list.
 *
 * Return: 1
 */

int print_char(va_list args)
{
	int i;

	i = va_arg(args, int);

	_putchar(i);

	return (1);
}
