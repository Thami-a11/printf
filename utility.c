#include "main.h"


/**
 * _strlen - Calculate the length
 * @str: String
 *
 * Return: i
 **/
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}

/**
 * print - print char.
 * @str: string.
 *
 * Return: i
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}
