#include "main.h"

/**
 * print_numbers - print numbers from 1 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
