#include "main.h"
/**
 * more_numbers - to print 10 times numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
	}
	_putchar('\n');
	i++;
}
