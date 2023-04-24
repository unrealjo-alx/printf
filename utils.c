#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a single character to the standard output stream
 * @c: the character to be printed
 * @chars_written: a pointer to the number of characters written so far
 * Return: the updated number of characters written so far
 */
int print_char(char c, int *chars_written)
{
	_putchar(c);
	(*chars_written)++;
	return (*chars_written);
}

/**
 * print_string - prints a null-terminated string to the standard output stream
 * @str: the string to be printed
 * @chars_written: a pointer to the number of characters written so far
 * Return: the updated number of characters written so far
 */
int print_string(char *str, int *chars_written)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		(*chars_written)++;
	}
	return (*chars_written);
}

/**
 * print_percent - prints a percent sign to the standard output stream
 * @chars_written: a pointer to the number of characters written so far
 * Return: the updated number of characters written so far
 */
int print_percent(int *chars_written)
{
	_putchar('%');
	(*chars_written)++;
	return (*chars_written);
}

/**
 * print_error - prints an error message for an invalid format specifier
 * to the standard output stream
 * @invalid_specifier: the invalid format specifier
 * @chars_written: a pointer to the number of characters written so far
 * Return: the updated number of characters written so far
 */
int print_error(char invalid_specifier, int *chars_written)
{
	_putchar('%');
	_putchar(invalid_specifier);
	(*chars_written) += 2;
	return (*chars_written);
}
