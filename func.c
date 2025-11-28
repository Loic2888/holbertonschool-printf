#include "main.h"
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
	{'i', print_int},
	{'d', print_int},
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
