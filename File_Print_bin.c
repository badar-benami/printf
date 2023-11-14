#include "main.h"

/**
 * print_bin --- binary nmbr is printed.
 * @val: C-Parameter.
 * Return: C-Integer
 */
int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int I, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (I = 0; I < 32; I++)
	{
		p = ((a << (31 - I)) & num);
		if (p >> (31 - I))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - I);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
