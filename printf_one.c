#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include "helpers.h"

/**
 * print_character - prints the character format
 * @args: the type of argument
 * @count: the number of characters
 *
 * Return: 0 success
 */
int print_character(va_list args, int *count)
{
	char c = (char) va_arg(args, int);
	*count += printf("%c", c);
	return (0);
}
/**
 * print_string - prints the string format
 * @args: the type of argument
 * @count: the number of characters
 *
 * Return: 0 success
 */
int print_string(va_list args, int *count)
{
	char *s = va_arg(args, char *);

	*count += printf("%s", s);
	return (0);
}
/**
 * print_percent - prints the percentage
 * @count: the number of characters
 *
 * Return: 0 success
 */
int print_percent(int *count)
{
	*count += printf("%%");
	return (0);
}
/**
 * print_integer - prints the integer format (d and i)
 * @args: the type of argument
 * @count: the number of characters
 *
 * Return: 0 success
 */
int print_integer(va_list args, int *count)
{
	int num = va_arg(args, int);

	*count += printf("%d", num);
	return (0);
}
/**
 * _printf - prints output according to format
 * @format: the type of argument
 * Return: the number of characters printed
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
				case 'p':
					print_address(args, &count);
					break;
				case '%':
					print_percent(&count);
					break;
				default:
					putchar('%');
					count++;
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
