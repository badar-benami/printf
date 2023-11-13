#include "main.h"

/**
 * fill_long_oct_array --- computes an octal number that is lengthy.
 *
 * @bnr: array in which the binary is kept.
 * @oct: array in which the octal is kept.
 *
 * Return: binary set.
 */
char *fill_long_oct_array(char *bnr, char *oct)
{
	int op, T, j, ioct, limit;

	oct[22] = '\0';
	for (T = 63, ioct = 21; T >= 0; T--, ioct--)
	{
		if (T > 0)
			limit = 4;
		else
			limit = 1;
		for (op = 0, j = 1; j <= limit; j *= 2, T--)
			op = ((bnr[T] - '0') * j) + op;
		T++;
		oct[ioct] = op + '0';
	}
	return (oct);
}
