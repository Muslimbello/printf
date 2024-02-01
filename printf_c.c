#include "main.h" // My custom main header file
/**
 * _printf - Printf function
 * @format: parameter for the printf function
 * Return: Number of printed Chars
 */
int _printf(const char *format, ...)
{
	int num_char = 0;
	va_list list_args;

	if (format == NULL) // checks if the printf is empty
		return (-1);

	va_start(list_args, format);
	num_char = gen_specifier(format, list_args);
	va_end(list_args);
	return (num_char);
}

// int main()
// {
// 	_printf("at%c\n", 't');
// 	_printf("cat\n");
// 	_printf("%%\n");
// 	_printf("%s\n", "dog");

// 	return 0;
// }