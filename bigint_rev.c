#include "BIGINT.h"

/**
 * bigint_rev - Reverses a string representing a big integer number.
 * @num: The string to be reversed.
 *
 * Return: A pointer to the reversed string.
 */
char *bigint_rev(const char *num)
{
	int length = strlen(num);
	char *reversed = malloc((length + 1) * sizeof(char));

	for (int i = 0; i < length; i++)
	{
		reversed[i] = num[length - i - 1];
	}

	reversed[length] = '\0';
	return (reversed);
}
