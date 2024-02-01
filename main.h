// INCLUDE GAURD
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
int gen_specifier(const char *format, va_list list_args);
int specifier(const char *format, va_list list_args);
int advanced_specifier(const char *format, va_list list_args);
int print_character(va_list list_args);
int my_putchar(char c);
int print_string(va_list list_args);
int print_decint(va_list arg);
int print_binary(va_list list_args);
int print_unsign(va_list list_args);
int print_octal(va_list list_args);
int print_hexlower(va_list list_args);
int print_hexupper(va_list list_args);
#endif