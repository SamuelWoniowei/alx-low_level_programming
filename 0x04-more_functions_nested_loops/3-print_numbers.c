#include "main.h"
/**
 * print_numbers - a function that prints the numbers between 0 and  9
 *
 * @i the current number at every time of the loop
 *
 * Return: The numbers between 0 - 9 followed by a newline
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
