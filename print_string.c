#include "main.h"
#include <stdio.h>
/**
 * print_string - Prints a string from the argument list.
 * @args: va_list containing the next argument (a char * string).
 *
 * Return: Number of characters printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(NULL)";
	while (*str)
	{
		_putchar(*str++);
		count++;
	}
	return (count);
}
