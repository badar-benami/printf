#include "main.h"

/**
 * print_str --- the string is written to stdout.
 * @arguments: enter string.
 * @buf: pointer to buffer.
 * @ibuf: buffer pointer index.
 * Return: On success one.
 */
int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int T;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (T = 0; nill[T]; T++)
			ibuf = handl_buf(buf, nill[T], ibuf);
		return (6);
	}
	for (T = 0; str[T]; T++)
		ibuf = handl_buf(buf, str[T], ibuf);
	return (T);
}
