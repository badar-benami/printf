#include "main.h"

/**
 * print_c --- Prints a char.
 * @val: C-Arguments.
 * Return: C-Integer.
 */
int print_c(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}

File_print_exc_string.c

#include "main.h"
/**
 * print_exc_string --- Print exclusuives string.
 * @val: C-parameter.
 * Return: C-integer.
 */

int print_exc_string(va_list val)
{
	char *s;
	int I, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (I = 0; s[I] != '\0'; I++)
	{
		if (s[I] < 32 || s[I] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[I];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX_extra(value);
		}
		else
		{
			_putchar(s[I]);
			length++;
		}
	}
	return (length);
}
