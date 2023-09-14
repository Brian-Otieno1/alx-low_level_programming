#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: parameter to check
 * Return: 1 (success) 0 (failure)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
