#include "main.h"
#include "format-handler.h"
#include <stdio.h>
#include <stdarg.h>

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
