#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>


int helper(const char *, va_list);
int format_helper(const char *, va_list, int *);

int _printf(const char *format, ...);

int _putchar(char c);
int buffer(char);

int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

int print_unsigned(va_list);
int print_string(va_list);
int char_print(va_list);
int print_integer(va_list);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: function
 **/

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
