#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: number used
 * Return: 0 (successful)
 */
int _abs(int i)
{
	if (i>0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
