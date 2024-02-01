#include "main.h"
/**
 * _printf - Printf function
 * @format: parameter for the printf function
 * Return: Number of printed Chars
 */
int _printf(const char *format, ...)
{
	int num_char = 0;
	va_list list_args;

	if (format == NULL)
		return (-1);

	va_start(list_args, format);
	num_char = gen_specifier(format, list_args);
	va_end(list_args);
	return (num_char);
}
