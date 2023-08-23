#ifndef HELPERS_H
#define HELPERS_H

#include <stdarg.h>
#include <stdio.h>

int print_unsigned_int(va_list args, int *count);
int print_octal(va_list args, int *count);
int print_hexadecimal(va_list args, int *count);
int print_address(va_list args, int *count);
int print_unknown(int *count);

#endif
