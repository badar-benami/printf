#include "main.h"

/**
 * prinhoct --- generates an octal long decimal number.
 * @arguments: enter number.
 * @buf: pointer to buffer.
 * @ibuf: buffer pointer index.
 * Return: char count that was printed.
 */
int prinhoct(va_list arguments, char *buf, unsigned int ibuf)
{
	short int int_input, T, isnegative, count, first_digit;
	char *octal, *binary;

	int_input = va_arg(arguments, int);
	isnegative = 0;
	if (int_input == 0)
	{
		ibuf = handl_buf(buf, '0', ibuf);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}

	binary = malloc(sizeof(char) * (16 + 1));
	binary = fill_binary_array(binary, int_input, isnegative, 16);
	octal = malloc(sizeof(char) * (6 + 1));
	octal = fill_short_oct_array(binary, octal);
	for (first_digit = T = count = 0; octal[T]; T++)
	{
		if (octal[T] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuf = handl_buf(buf, octal[T], ibuf);
			count++;
		}
	}
	free(binary);
	free(octal);
	return (count);
}
