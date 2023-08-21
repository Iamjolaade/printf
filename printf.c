#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: the string character
 * @...: the variable functions
 * Return: count
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
					{
						char c = (char) va_arg(args, int);

						count += printf("%c\n", c);
						break;
					}

					case 's':
					{
						char *s = va_arg(args, char *);

						count += printf("%s\n", s);
						break;
					}

					case '%':
					count += printf("%%\n");
					break;

					default:
					break;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
