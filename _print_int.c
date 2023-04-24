#include "main.h"
/**
 * _print_int - Prints an integer to stdout using _putchar
 * @n: The integer to be printed
 * Return: The number of characters printed
 */
int _print_int(int n)
{
	int chars_written = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		chars_written++;
	}

	if (n / 10)
	{
		chars_written += _print_int(n / 10);
	}

	_putchar((n % 10) + '0');
	chars_written++;

	return (chars_written);
}
