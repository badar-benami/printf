#include "main.h"
#include <stdio.h>
/**
 * print_chr --- puts "c" to the standard output.
 * @arguments: input character.
 * @buf: bpointer to buffer.
 * @ibuf: buffer pointer index.
 * Return: On success one.
 */
int print_chr(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handl_buf(buf, c, ibuf);

	return (1);
}
