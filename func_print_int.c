#include "main.h"
/**
 * print_int - prints an integer.
 * @args: va_list containing the integer
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	return (_itoa(args));
}
