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
unsigned int i, counter = 0;


va_list param;

va_start(param, format);

for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] != '%')
	{
		_putchr(format[i]);
	}
	if (format[i] == '%' && format[i + 1] == 'c')
	{
		_putchr(va_arg(param, int));
i++;
	}

	counter++;
}
va_end(param);
return (counter);
}

