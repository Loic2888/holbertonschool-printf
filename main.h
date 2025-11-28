#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * typedef op_func - Function pointer type for handling format specifiers.
 * @args: va_list containing the next argument to process.
 *
 * Return: Number of characters printed.
 */
typedef int (*op_func)(va_list args);

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);

op_func get_op_func(char c);

int _printf(const char *format, ...);
/**
 * struct caracter - Structure that associates a format specifier
 *                   character with its corresponding print function.
 * @c: The format specifier character (e.g., 'c', 's', '%').
 * @op_function: Function pointer for printing the corresponding argument type.
 *
 * Description: This structure is used to map format specifiers
 * to their respective handling functions in the _printf implementation.
 */
struct caracter
{
	char c;
	op_func op_function;
};
typedef struct caracter caracter;

#endif
