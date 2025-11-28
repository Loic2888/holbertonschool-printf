#include "main.h"
/**
 * print_char - Prints a character from the argument list.
 * @args: va_list containing the next argument.
 * Return: Number of characters printed (always 1).
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
