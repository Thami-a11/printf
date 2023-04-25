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
	int strSize, n, nFormat;

	f = formats[] = {{'s', print_string}, {'c', print_char}};

	*i = *i + 1;

	if (s[*i] == '\0')
		return (-1);

	if (s[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	f = sizeof(f) / sizeof(f[0]);

	for (strSize = n = 0; n < f; n++)
	{
		if (s[*i] == f[j].type)
		{
			strSize = f[j].f(list);
			return (strSize);
		}

	}

	_putchar('%'), _putchar(s[*i]);

	return (2);
}
