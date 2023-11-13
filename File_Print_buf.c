#include "main.h"

/**
 * print_buf --- displays buffer.
 * @buf: pointer to buffer.
 * @nbuf: how many bytes to print.
 * Return: quantity of printed bytes.
 */
int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
