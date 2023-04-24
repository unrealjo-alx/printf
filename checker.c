#include "main.h"
/**
 * handle_specifier - processes a format specifier in the format string
 * and calls the appropriate helper function to print the corresponding value
 * to the standard output stream
 * @format_ptr: a pointer to the current position in the format string
 * @args: a va_list containing the arguments corresponding to the format string
 * @chars_written: a pointer to the number of characters written so far
 * Return: the updated number of characters written so far
 */
int handle_specifier(const char **format_ptr, va_list args, int *chars_written)
{
	switch (**format_ptr)
	{
	case 'c':
	{
		char c = va_arg(args, int);

		return (print_char(c, chars_written));
	}
	case 's':
	{
		char *str = va_arg(args, char *);

		return (print_string(str, chars_written));
	}
	case '%':
	{
		return (print_percent(chars_written));
	}
	case 'd':
	case 'i':
	{
		int n = va_arg(args, int);

		return (_print_int(n));
	}
	default:
	{
		return (print_error(**format_ptr, chars_written));
	}
	}
}
