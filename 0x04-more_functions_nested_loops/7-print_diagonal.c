#include "main.h"
/**
 * print_diagonal - to draw a diagonal line on the terminal
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar("\");
	}
	_putchar('\n');
}
