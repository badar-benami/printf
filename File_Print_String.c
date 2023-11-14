#include "main.h"
/**
 * print_s --- print a string.
 * @val: C-argumen (t).
 * Return: the length of the string.
 */

int print_s(va_list val)
{
	char *s;
	int I, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (I = 0; I < len; I++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (I = 0; I < len; I++)
			_putchar(s[I]);
		return (len);
	}
}
