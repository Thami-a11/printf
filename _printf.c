#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 output
*/

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while(*format)
	{
		if(*format == '%')
		{
			format++;
			
			if(*format == 's')
			{
				char* str = va_arg(args, char*);
				return(_putchar(str));
			}
			if(*format == 'c')
			{
				char c = (char) va_arg(args, int);
				return(_putchar(c));
			}
		}
		else
		{
			return(_putchar(*format));
		}
		format++;
	}

	va_end(args);
}
