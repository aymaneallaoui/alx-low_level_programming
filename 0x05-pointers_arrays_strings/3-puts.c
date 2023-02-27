#include "main.h"
/**
 * _puts - to print a string, followed by a new line, to stdout.
 * @str: pointer to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
