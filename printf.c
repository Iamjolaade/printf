#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include "format-handler.h"
#include "printf-helpers.h"
/**
 * _printf - prints output according to format
 * @format: the type of character
 * @...: the variable function elements
 * Return: count of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					print_character(args, &count);
					break;
				case 's':
					print_string(args, &count);
					break;
				case 'd':
				case 'i':
					print_integer(args, &count);
					break;
				case 'u':
					print_unsigned(args, &count);
					break;
				case 'o':
					print_octal(args, &count);
					break;
				case 'X':
					print_hexadecimal(args, &count);
					break;
				case 'p':
					print_address(args, &count);
					break;
				case '%':
					print_percent(&count);
					break;
				default:
					break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
