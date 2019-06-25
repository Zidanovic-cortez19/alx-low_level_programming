#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int l;

	if (n < -9)
	{
		n *= -1;
		l = n % 10;
		_putchar(l + 48);
		return (l);
	}
	else if (n >= -9 && n < 0)
	{
		n *= -1;
		l = n % 10;
		_putchar('-');
		_putchar(l + 48);
		return (-l);
	}
	else
	{
		l = n % 10;
		_putchar(l + 48);
		return (l);
	}
}