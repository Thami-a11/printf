#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _strlen(const char *);

int helper(const char *, va_list);
int format_helper(const char *, va_list, int *);

int _printf(const char *format, ...);
int _putchar(char c);

#endif
