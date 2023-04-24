#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: a character string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int chars_written = 0;
	const char *format_ptr = format;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format_ptr != '\0')
	{
		if (*format_ptr == '%')
		{
			format_ptr++;

			chars_written = handle_specifier(&format_ptr, args, &chars_written);
		}
		else
		{
			chars_written = print_char(*format_ptr, &chars_written);
		}

		format_ptr++;
	}

	va_end(args);

	return (chars_written);
}
