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

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
			case 'c':
			{
				char c = va_arg(args, int);
				_putchar(c);
				chars_written++;
				break;
			}
			case 's':
			{
				char *str = va_arg(args, char *);
				while (*str != '\0')
				{
					_putchar(*str);
					str++;
					chars_written++;
				}
				break;
			}
			case '%':
			{
				_putchar('%');
				chars_written++;
				break;
			}
			default:
			{
				_putchar('%');
				_putchar(*format);
				chars_written += 2;
				break;
			}
			}
		}
		else
		{
			_putchar(*format);
			chars_written++;
		}

		format++;
	}

	va_end(args);
	return (chars_written);
}