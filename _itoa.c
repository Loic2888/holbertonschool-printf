#include "main.h"
/**
 * _itoa - Converts an integer to a string and prints it.
 * @args: va_list containing the integer to convert.
 *
 * Return: Number of characters printed.
 */
int _itoa(va_list args)
{
	int sign = 1;
	unsigned int num;
	int count = 0;
	int divisor = 1;
	int digit;
	int n = va_arg(args, int);

	if (n < 0)
	{
		sign = -1;
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num == 0)
	{
		_putchar('0');
		return (count + 1);
	}
	while (num / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		count++;
		num %= divisor;
		divisor /= 10;
	}
	return (count);
}
