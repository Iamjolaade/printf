#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_reversed_string - prints the reversed string
 * @count: the number of arguments
 * @args: the pointer
 * Return: 0
 */
void print_reversed_string(va_list args, int *count)
{
	char *s = va_arg(args, char *);
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
		(*count)++;
	}
}

/**
 * print_binary - unsigned int argument is converted to binary
 * @num: the int to be converted
 * @count: the number of arguments
 * Return: 0
 */
void print_binary(unsigned int num, int *count)
{
	if (num > 1)
	{
		print_binary(num / 2, count);
	}
	*count += printf("%d", num % 2);
}
/**
 * print_hexadecimal_upper - prints the hexadecimal format in lowercase
 * @args: the type of argument
 * @count: the number of characters
 *
 * Return: 0 success
 */
int print_hexadecimal_upper(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	*count += printf("%X", num);
	return (0);
}
