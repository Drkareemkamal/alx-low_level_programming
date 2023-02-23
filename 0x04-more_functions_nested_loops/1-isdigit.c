#include "main.h"
/**
 * _isdigit - Check for a digit (0-9)
 * @c: Integer holding the character
 *
 * Return: 1- Digit 0- Not
 */

int _isdigit(int d)
{
	if (d >= 48 && d <= 57)
		return (1);

	return (0);
}
