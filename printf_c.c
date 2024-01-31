#include "main.h" // My custom main header file

int _printf(const char *format, ...)
{
	int num_char = 0;
	va_list list_args;
	if (format == NULL) // checks if the printf is empty first
	{
		return (-1);
	}
	va_start(list_args, format);
	while (*format)
	{
		if (*format != '%') // Checks if no special character present
		{
			write(1, format, 1);
			num_char++;
		}

		else // if there is a special character 
		{

			format++; // moves to the string specifier after the % 
			if (*format == '\0')
				break;

			if (*format == 'c') // checks for single chracter using the c specifier
			{
				char character = va_arg(list_args, int);
				write(1, &character, 1);
				num_char++;
			}
			else if (*format == 's') // check for string using the s specifier
			{
				char *str = va_arg(list_args, char *);
				int strlength = 0; // calculating the legth of the loop
				while (str[strlength] != '\0')
					strlength++;
				write(1, str, strlength);
				num_char += strlength;
			}
			else if (*format == '%') // checks for the % chracter
			{
				write(1, format, 1);
				num_char++;
			}
		}
		format++;
	}

	va_end(list_args); //
	return num_char;   // the number of characters printed
}

int main()
{
	_printf("at%c\n", 't');
	_printf("cat\n");
	_printf("%%\n");
	_printf("%s\n", "dog");

	return 0;
}
