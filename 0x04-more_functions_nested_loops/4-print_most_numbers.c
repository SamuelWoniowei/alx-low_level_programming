#include "main.h"
/**
 * print_most_numbers: a function that prints the numbers between 0 - 9
 * without numbers 2 and 4
 *
 * @i is the current value of the loop during its runtime
 *
 * Return: the value without numbers 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
