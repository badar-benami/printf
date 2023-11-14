#include "main.h"

/**
 * print_HEX_extra --- a hexgecimal number is printed.
 * @num: nmbr to printed.
 * Return: C-counter.
 */
int print_HEX_extra(unsigned int num)
{
	int I;
	int *array;
	int counter = 0;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (I = 0; I < counter; I++)
	{
		array[I] = tem % 16;
		tem /= 16;
	}
	for (I = counter - 1; I >= 0; I--)
	{
		if (array[I] > 9)
			array[I] = array[I] + 7;
		_putchar(array[I] + '0');
	}
	free(array);
	return (counter);
}
