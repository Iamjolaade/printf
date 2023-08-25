#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int putchar(int c);
int print_integer(va_list args, int *count);
int print_percent(int *count);
int print_string(va_list args, int *count);
int print_character(va_list args, int *count);
int print_unknown(int *count);
int print_address(va_list args, int *count);
int print_hexadecimal_lower(va_list args, int *count);
int print_hexadecimal_upper(va_list args, int *count);
int print_octal(va_list args, int *count);
int print_unsigned_int(va_list args, int *count);
int printf_two(const char *format, va_list args);
void print_binary(unsigned int num, int *count);
void print_reversed_string(va_list args, int *count);
int print_custom_string(va_list args, int *count);

#endif
