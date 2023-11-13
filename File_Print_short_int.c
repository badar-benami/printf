#include "main.h"

/**
 * prinhint --- generates a brief integer.
 * @arguments: enter string.
 * @buf: pointer to buffer.
 * @ibuf: buffer pointer index.
 * Return: char count that was printed.
 */
int prinhint(va_list arguments, char *buf, unsigned int ibuf)
{
	short int int_input;
	unsigned short int int_in, int_temp, T, div, isneg;

	int_input = va_arg(arguments, int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuf = handl_buf(buf, '-', ibuf);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}
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
	return (T + isneg);
}
