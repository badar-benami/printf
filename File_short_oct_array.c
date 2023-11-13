#include "main.h"

/**
 * fill_short_oct_array --- computes an octal number in abbreviated form.
 *
 * @bnr: array in which the binary is kept.
 * @oct: array in which the octal is kept.
 *
 * Return: binary set.
 */
char *fill_short_oct_array(char *bnr, char *oct)
{
	int op, T, j, ioct, limit;

	oct[6] = '\0';
	for (T = 15, ioct = 5; T >= 0; T--, ioct--)
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
