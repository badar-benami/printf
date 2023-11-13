#include "main.h"
/**
 * print_unt --- generates an anonymous int.
 * @arguments: number to print
 * @buf: pointer to buffer.
 * @ibuf: buffer pointer index.
 * Return: char count that was printed.
 */
int print_unt(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned int int_in, int_temp, T, div;

	int_in = va_arg(arguments, unsigned int);
	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (T = 0; div > 0; div /= 10, T++)
	{
		ibuf = handl_buf(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (T);
}
