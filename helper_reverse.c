#include "BIGINT.h"

/**
 * reverse - Reverses a string representing a big integer number.
 * @num: The string to be reversed.
 *
 * Return: A pointer to the reversed string.
 */

char *reverse(const char *num)
{
	int length = strlen(num);
	char *reversed = malloc((length + 1));

	if (!reversed)
	{
		return (NULL);
	}

	for (int i = 0; i < length; i++)
	{
		reversed[i] = num[length - i - 1];
	}

	reversed[length] = '\0';

	return (reversed);
}
