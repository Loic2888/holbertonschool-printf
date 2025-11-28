#include "main.h"
/**
 * print_int - print an integer
 * @args: list of int to print
 * Return: number characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	char buffer[20];
	int i = 0;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
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
