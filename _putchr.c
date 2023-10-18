#include "main.h"

/**
 * _putchr - prints a single character
 * @c: character to be printed
 * Return: 1
 */

int _putchr(char c)
{
return (write(1, &c, 1));
}
