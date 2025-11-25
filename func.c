#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
		str = "(null)";
	while (*str)
	{
		_putchar(*str++);
		count++;
	}
	return (count);
}
/**
 * print_percent - Prints a percent sign '%'.
 * @args: va_list (unused).
 *
 * Return: Number of characters printed (always 1).
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
/**
 * get_op_func - Retrieves the function associated with a format specifier.
 * @c: The format specifier character.
 *
 * Return: Pointer to the function handling the specifier, or NULL.
 */
op_func get_op_func(char c)
{
	caracter caract[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	};

	int i = 0;
	int n = sizeof(caract) / sizeof(caracter);

	while (i < n)
	{
		if (caract[i].c == c)
			return (caract[i].op_function);
		i++;
	}
	return (NULL);
}
