#include "main.h"

/**
 * print_hex_extra --- a hexgecimal nmbr.
 * @num: C-Arguments.
 * Return: C-counter.
 */
int print_hex_extra(unsigned long int num)
{
	long int I;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (I = 0; I < counter; I++)
	{
		array[I] = temp % 16;
		temp = temp / 16;
	}
	for (I = counter - 1; I >= 0; I--)
	{
		if (array[I] > 9)
			array[I] = array[I] + 39;
		_putchar(array[I] + '0');
	}
	free(array);
	return (counter);
}
