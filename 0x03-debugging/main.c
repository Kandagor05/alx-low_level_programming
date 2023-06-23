#include "main.h"

/**
 * positive_or_negative - tests negative number or positive
 * Return: 0
 * @i: The number
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("Positive %d ", i);
	}
	else if (i == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("It is negative %d ", i);

	}
}
