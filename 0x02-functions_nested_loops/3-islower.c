#include "main.h"
/**
 * check if character is lowercase
 * return 1 if character is lowercase
 * return 0 if it is not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
