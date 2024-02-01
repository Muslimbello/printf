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
		if (*format != '%') // Checks if its the % chracter
		{
			write(1, format, 1);
			num_char++;
		}

		else
		{

			format++; // if the compiler reach this state it means it ennum_charer a % then i want to move to the next character to it which will be our specifier
			// if (*format == '\0') // check if its the end
			// 	break;

			if (*format == 'c' || *format == 's' || *format == '%' || *format == 'd' || *format == 'i' || *format == 'b')
			{
				num_char += specifiers_1(format, list_args);
			}
			else if (*format == 'u' || *format == 'o' || *format == 'x' || *format == 'X')
			{
				num_char += specifier_2(format, list_args);
			}
			format++;
		}
	}
}