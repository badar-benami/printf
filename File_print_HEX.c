#include "main.h"

/**
 * print_HEX --- generates a hexgecimal nmbr.
 * @val: C-Arguments.
 * Return: C-Counter.
 */
int print_HEX(va_list val)
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
