#include "main.h"
/**
 * print_rot13 --- Convert to (rot13).
 * @args: Arguments for printf.
 * Return: C-counter.
 *
 */
int print_rot13(va_list args)
{
	int I, j, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (I = 0; s[I]; I++)
	{
		k = 0;
		for (j = 0; al[j] && !k; j++)
		{
			if (s[I] == al[j])
			{
				_putchar(bl[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[I]);
			counter++;
		}
	}
	return (counter);
}
