#include "main.h"

/**
 * fill_hex_array --- stdout receives the character c.
 *
 * @bnr: The binary is stored in an array.
 * @hex: The hexadecimal is kept in an array.
 * @isupp: Determines if the hexadecimal array is
 * in uppercase or lowercase letters.
 * @limit: Hexagon size.
 * Return: binary collection.
 */
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit)
{
	int op, T, j, toletter;

	hex[limit] = '\0';
	if (isupp)
		toletter = 55;
	else
		toletter = 87;
	for (T = (limit * 4) - 1; T >= 0; T--)
	{
		for (op = 0, j = 1; j <= 8; j *= 2, T--)
			op = ((bnr[T] - '0') * j) + op;
		T++;
		if (op < 10)
			hex[T / 4] = op + 48;
		else
			hex[T / 4] = op + toletter;
	}
	return (hex);
}
