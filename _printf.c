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
