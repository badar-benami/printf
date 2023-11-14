#include "main.h"

/**
 * print_oct --- Prints an octal NB.
 * @val: C-arguments.
 * Return: C-counter.
 */
int print_oct(va_list val)
{
	int I;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (I = 0; I < counter; I++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	for (I = counter - 1; I >= 0; I--)
	{
		_putchar(array[I] + '0');
	}
	free(array);
	return (counter);
}
