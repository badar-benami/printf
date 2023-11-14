#include "main.h"
/**
 * print_i --- Prints integer.
 * @args: C-Argument to print.
 * Return: C-Integer.
 */
int print_i(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  I = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		I++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			I++;
		}
	}
	_putchar(last + '0');

	return (I);
}

/**
 * print_d --- Prints NR decimal.
 * @args: C-argument to print.
 * Return: Integer.
 */

int print_d(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  I = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		I++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			I++;
		}
	}
	_putchar(last + '0');

	return (I);
}
