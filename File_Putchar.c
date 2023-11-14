#include "main.h"

/**
 * _putchar --- stdout receives the char c.
 * @c: The character to be printed.
 *
 * Return: On success One.
 * On error, -one is returned, and errno is suitably set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
