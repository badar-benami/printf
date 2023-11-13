#include "main.h"
#include <stdio.h>

/**
 * print_prg --- puts "c" to the standard output.
 * @a: enter character.
 * @buf: pointer to buffer.
 * @T: buffer pointer index.
 * Return: On success 1.
 */
int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int T)
{
	handl_buf(buf, '%', T);

	return (1);
}
