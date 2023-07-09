#include "BIGINT.h"

/**
 * add_minus - Adds a minus sign to a given number.
 * @num: The number to add the minus sign to.
 *
 * Return: A pointer to the number with the minus sign.
 */

char *add_minus(const char *num)
{
	int num_len = strlen(num), i = 0;
	char *copy = NULL;

	if (num[0] == '-')
	{
		return (NULL);
	}

	copy = malloc(num_len + 2);
	if (!copy)
	{
		return (NULL);
	}

	copy[0] = '-';

	for (i = 1; i < num_len + 2; i++)
	{
		copy[i] = num[i - 1];
	}

	return (copy);
}


