#include "main.h"

/**
 * helper - Format helper
 * @s: string format
 * @args: arguments
 *
 * Return: string size
 **/

int helper(const char *s, va_list args)
{
	int n, i, x;

	n = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '%')
		{
			x = format_helper(s, args, &i);

			if (x == -1)
				return (-1);

			n += x;
			continue;
		}

		_putchar(s[i]);
		n = n + 1;
	}

	return (n);
}

/**
 * format_helper - helper function for format
 * @s: String
 * @args: List args
 * @i: int
 *
 * Return: printerd elements
 **/


int format_helper(const char *s, va_list args, int *i)
{
	int strSize, n, nFormats;

	format fs[] = {{'s', print_string}, {'c', print_char},
			{'d', print_integer}, {'i', print_integer}};

	*i = *i + 1;

	if (s[*i] == '\0')
		return (-1);

	if (s[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	nFormats = sizeof(fs) / sizeof(fs[0]);

	for (strSize = n = 0; n < nFormats; n++)
	{
		if (s[*i] == fs[n].type)
		{
			strSize = fs[n].f(args);
			return (strSize);
		}

	}

	_putchar('%'), _putchar(s[*i]);

	return (2);
}
