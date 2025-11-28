#include "main.h"
/**
 * print_int - print an integer
 * @args: list of int to print
 * Return: number characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num = n;
	char buffer[20];
	int i = 0;
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	while (i > 0)
	{
		i--;
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}
