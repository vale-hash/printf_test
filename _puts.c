#include "main.h"
/**
 * _puts - function to display a string
 *@str: - the string to be printed
 * Return:  number of bytes
 */
int _puts(char *str)
{
int i;
char c;
if (str)
for (i = 0; str[i] != '\0'; i++)
{
	c = str[i];
	_putchr(c);
}
return (i);
}
