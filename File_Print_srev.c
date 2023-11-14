#include "main.h"

/**
 * print_revs --- a method that prints a string backwards.
 * @args: Printf arguments are assigned to struct va_arg.
 *
 * Return: The string.
 */
int print_revs(va_list args)
{

	char *s = va_arg(args, char*);
	int I;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (I = j - 1; I >= 0; I--)
		_putchar(s[I]);
	return (j);
}
