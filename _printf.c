#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _printf - copy of the C printf function to print stout to formmatted text.
 * @format:format specifier .
 * Return: the number of bytes printed.
 */

int _printf(const char *format,	...)
{
unsigned int i, counter = 0, str_count;

va_list param;

va_start(param, format);

for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] != '%')
	{
		_putchr(format[i]);
	}
	else if (format[i] == '%' && format[i + 1] == 'c')
	{
		_putchr(va_arg(param, int));
		i++;
	}
	else if (format[i + 1] == 's')
	{
		str_count = _puts(va_arg(param, char*));
		i++;
		counter += (str_count - 1);
	}
	counter++;
}
va_end(param);
return (counter);
}

