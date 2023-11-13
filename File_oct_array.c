#include "main.h"

/**
 * fill_oct_array --- puts "c" to the standard output.
 *
 * @bnr: array in which the binary is kept.
 * @oct: array in which the octal is kept.
 *
 * Return: binary set.
 */
char *fill_oct_array(char *bnr, char *oct)
{
	int op, T, j, ioct, limit;

	oct[11] = '\0';
	for (T = 31, ioct = 10; T >= 0; T--, ioct--)
	{
		if (T > 1)
			limit = 4;
		else
			limit = 2;
		for (op = 0, j = 1; j <= limit; j *= 2, T--)
			op = ((bnr[T] - '0') * j) + op;
		T++;
		oct[ioct] = op + '0';
	}
	return (oct);
}
