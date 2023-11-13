#include "main.h"

/**
 * print_rev --- writes the string backwards.
 * @arguments: enter string.
 * @buf: pointer to buffer.
 * @ibuf: index for buffer pointer
 * Return: char count that was printed.
 */
int print_rev(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int T;
	int j = 0;
	char nill[] = "(llun)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (T = 0; nill[T]; T++)
			ibuf = handl_buf(buf, nill[T], ibuf);
		return (6);
	}
	for (T = 0; str[T]; T++)
		;
	j = T - 1;
	for (; j >= 0; j--)
	{
		ibuf = handl_buf(buf, str[j], ibuf);
	}
	return (T);
}
