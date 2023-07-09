#include "BIGINT.h"

/**
 * remove_minus - Removes the minus sign from a given number.
 * @num: The number to remove the minus sign from.
 *
 * Return: A pointer to the number without the minus sign.
 */

char *remove_minus(const char *num)
{
	int num_len = strlen(num);
	char *copy = NULL;

	if (num[0] != '-')
	{
		return (NULL);
	}

	copy = malloc(num_len);
	if (!copy)
	{
		return (NULL);
	}

	copy = strcpy(copy, num + 1);

	return (copy);
}

