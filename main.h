#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(char c, int *chars_written);
int print_string(char *str, int *chars_written);
int print_percent(int *chars_written);
int print_error(char invalid_specifier, int *chars_written);
int handle_specifier(const char **format_ptr, va_list args, int *chars_written);
int _print_int(int n);
#endif
