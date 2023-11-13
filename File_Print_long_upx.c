#include "main.h"

/**
 * prinlupx --- hexadecimal output of a lengthy decimal.
 * @arguments: The char to print.
 * @buf: pointer to buffer.
 * @ibuf: index for buffer pointer
 * Return: char count that was printed.
 */
int prinlupx(va_list arguments, char *buf, unsigned int ibuf)
{
	long int int_input, T, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(arguments, long int);
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

	binary = malloc(sizeof(char) * (64 + 1));
	binary = fill_binary_array(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = fill_hex_array(binary, hexadecimal, 1, 16);
	for (first_digit = T = count = 0; hexadecimal[T]; T++)
	{
		if (hexadecimal[T] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuf = handl_buf(buf, hexadecimal[T], ibuf);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count);
}
