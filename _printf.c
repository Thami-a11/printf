#include "main.h"

/**
 * _printf - prints a string
 * @format:format string
 *
 * Return: number of printed string
**/

int _printf(const char *format, ...)
{
	int s;

	va_list args;

	if (format == NULL)
		return (-1);

	s = _strlen(format);

	if (s <= 0)
		return (0);

	va_start(args, format);

	s = helper(format, args);

	_putchar(-1);

	va_end(args);

	return (s);
}
