#include "main.h"
/**
 * gen_specifier - Format and print data according to a format specifier.
 *
 * @format: A format string containing format specifiers.
 * @list_args: A va_list containing the arguments to be formatted and printed.
 *
 * Return: The total number of characters printed.
 */
int gen_specifier(const char *format, va_list list_args)
{
	int num_char = 0;

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			num_char++;
		}

		else
		{

			format++;

			if (*format == 'c' || *format == 's' ||
				*format == '%' || *format == 'd' ||
				*format == 'i' || *format == 'b')
			{
				num_char += specifier(format, list_args);
			}
			else if (*format == 'u' ||
					 *format == 'o' ||
					 *format == 'x' ||
					 *format == 'X')
			{
				num_char += advanced_specifier(format, list_args);
			}
			format++;
		}
	}
	return (num_char);
}
