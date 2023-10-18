#include "main.h"
#include <stdio.h>
/**
 * _print_integer: - Print an integer using only _putchar
 */
int _print_integer(int num)
{
int printed_chars = 0;

if (num < 0)
{
printed_chars += _putchr('-');
num = -num;
}

char buffer[12];  // Large enough for INT_MIN
int digits = 0;
while (num > 0)
{
buffer[digits] = num % 10 + '0';
num /= 10;
digits++;
}

for (int i = digits - 1; i >= 0; i++)
{
printed_chars += _putchr(buffer[i]);
}

return (printed_chars);

}
