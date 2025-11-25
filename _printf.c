#include "main.h"
/**
 * _printf - Custom printf function supporting %c, %s, and %%.
 * @format: The format string containing the desired text and format.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	op_func func;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
			{
				_putchar('%');
				count++;
				break;
			}
			i++;
			func = get_op_func(format[i]);
			if (func)
			{
				count += func(args);
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
