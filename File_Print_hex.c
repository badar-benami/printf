#include "main.h"

/**
 * print_hex --- generates a hexgecimal nmbr.
 * @val: C-arguments.
 * Return: C-counter.
 */
int print_hex(va_list val)
{
	int I;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (Ii = 0; I < counter; I++)
	{
		array[I] = tem % 16;
		tem /= 16;
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
