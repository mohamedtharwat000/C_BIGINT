#include "BIGINT.h"

/**
 * bigint_cmp - Compares two bigint numbers.
 * @num1: The first bigint number.
 * @num2: The second bigint number.
 *
 * Return: 1 if num1 is greater, -1 if num2 is greater, 0 if they equal.
 */
int bigint_cmp(const char *num1, const char *num2)
{
	int num1_len = strlen(num1);
	int num2_len = strlen(num2);

	if (num1_len > num2_len)
	{
		return (1);
	}
	else if (num2_len > num1_len)
	{
		return (-1);
	}
	else
	{
		return (strcmp(num1, num2));
	}
}
