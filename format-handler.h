#ifndef FORMAT_HANDLER_H
#define FORMAT_HANDLER_H

#include <stdarg.h>

int print_character(va_list args, int *count);
int print_string(va_list args, int *count);
int print_percent(int *count);
int print_integer(va_list args, int *count);

#endif
