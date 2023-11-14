#include "main.h"

/**
 * print_pointer --- Prints an hexgecimal NB.
 * @val: C-arguments.
 * Return: C-counter.
 */
int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int I;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (I = 0; s[I] != '\0'; I++)
		{
			_putchar(s[I]);
		}
		return (I);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hex_extra(x);
	return (y + 2);
}
