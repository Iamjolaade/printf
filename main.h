#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int putchar(int c);
int print_integer(va_list args, int *count);
int print_percent(int *count);
int print_string(va_list args, int *count);
int print_character(va_list args, int *count);

#endif
