#include "main.h"

/**
 * print_rot --- the str is written in ROT13.
 * @arguments: enter string.
 * @buf: pointer to buffer.
 * @ibuf: buffer pointer index.
 * Return: char count that was printed.
 */

int print_rot(va_list arguments, char *buf, unsigned int ibuf)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int T, j, k;
	char nill[] = "(avyy)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (T = 0; nill[T]; T++)
			ibuf = handl_buf(buf, nill[T], ibuf);
		return (6);
	}
	for (T = 0; str[T]; T++)
	{
		for (k = j = 0; alf[j]; j++)
		{
			if (str[T] == alf[j])
			{
				k = 1;
				ibuf = handl_buf(buf, rot[j], ibuf);
				break;
			}
		}
		if (k == 0)
			ibuf = handl_buf(buf, str[T], ibuf);
	}
	return (T);
}
