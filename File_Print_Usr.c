#include "main.h"

/**
 * print_usr --- outputs a string with the values of
 * non-printed characters.
 * @arguments: enter string.
 * @buf: pointer to buffer.
 * @ibuf: buffer pointer index.
 * Return: char count that was printed
 */
int print_usr(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned char *str;
	char *hexadecimal, *binary;
	unsigned int T, sum, op;

	str = va_arg(arguments, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = T = 0; str[T]; T++)
	{
		if (str[T] < 32 || str[T] >= 127)
		{
			ibuf = handl_buf(buf, '\\', ibuf);
			ibuf = handl_buf(buf, 'x', ibuf);
			op = str[T];
			binary = fill_binary_array(binary, op, 0, 32);
			hexadecimal = fill_hex_array(binary, hexadecimal, 1, 8);
			ibuf = handl_buf(buf, hexadecimal[6], ibuf);
			ibuf = handl_buf(buf, hexadecimal[7], ibuf);
			sum += 3;
		}
		else
			ibuf = handl_buf(buf, str[T], ibuf);
	}
	free(binary);
	free(hexadecimal);
	return (T + sum);
}
