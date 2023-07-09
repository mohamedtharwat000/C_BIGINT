#include "BIGINT.h"

/**
 * cmp - Compares two big integer numbers.
 * @num1: The first big integer number.
 * @num2: The second big integer number.
 * @num1_len: The length of the first number.
 * @num2_len: The length of the second number.
 *
 * Return: >1 if num1 is greater, <1 if num2 is greater, 0 if they are equal.
 */

int cmp(const char *num1, const char *num2, int num1_len, int num2_len)
{
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
