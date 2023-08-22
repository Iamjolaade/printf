#include "main.h"
#include "printf-helpers.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_unsigned - prints unsigned integer format
 * @args: the type of argument
 * @count: the number of characters
 *
 * Return: 0 success
 */
int print_unsigned(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	*count += printf("%u", num);
	return (0);
}
/**
 * print_octal - prints the octal format
 * @args: the type of argument
 * @count: the number of characters
 *
 * Return: 0 success
 */
int print_octal(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	*count += printf("%o", num);
	return (0);
}
/**
 * print_hexadecimal - prints the hexadecimal format
 * @args: the type of argument
 * @count: the number of characters
 *
 * Return: 0 success
 */
int print_hexadecimal(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	*count += printf("%X", num);
	return (0);
}
/**
 * print_address - prints the address format
 * @args: the type of argument
 * @count: the number of characters
 *
 * Return: 0 success
 */
int print_address(va_list args, int *count)
{
	void *ptr = va_arg(args, void *);

	*count += printf("%p", ptr);
	return (0);
}
/**
 * print_unknown - prints unknown type
 * @count: the number of characters
 *
 * Return: 0 success
 */
int print_unknown(int *count)
{
	*count += printf("Unknown type");
	return (0);
}
