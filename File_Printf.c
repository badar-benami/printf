#include "main.h"

/**
 * _printf --- print data and formatted output conversion.
 * @format: the input string.
 *
 * Return: char count that was printed.
 */
int _printf(const char *format, ...)
{
	unsigned int T = 0, len = 0, ibuf = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[T] == '%' && !format[Ti + 1]))
		return (-1);
	if (!format[T])
		return (0);
	for (T = 0; format && format[T]; Ti++)
	{
		if (format[T] == '%')
		{
			if (format[T + 1] == '\0')
			{	print_buf(buffer, ibuf), free(buffer), va_end(arguments);
				return (-1);
			}
			else
			{	function = get_print_func(format, T + 1);
				if (function == NULL)
				{
					if (format[T + 1] == ' ' && !format[T + 2])
						return (-1);
					handl_buf(buffer, format[T], ibuf), len++, T--;
				}
				else
				{
					len += function(arguments, buffer, ibuf);
					T += ev_print_func(format, T + 1);
				}
			} T++;
		}
		else
			handl_buf(buffer, format[T], ibuf), len++;
		for (ibuf = len; ibuf > 1024; ibuf -= 1024)
			;
	}
	print_buf(buffer, ibuf), free(buffer), va_end(arguments);
	return (len);
}
