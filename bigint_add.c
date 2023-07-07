#include "BIGINT.h"

/**
 * bigint_add - Adds two bigint numbers.
 * @num1: The first bigint number.
 * @num2: The second bigint number.
 *
 * Return: A pointer to the sum of the two numbers.
 */
char *bigint_add(const char *num1, const char *num2)
{
	int num1_len = strlen(num1);
	int num2_len = strlen(num2);
	int maxLen = (num1_len > num2_len) ? num1_len : num2_len;
	int sum = 0, carry = 0, i = 0;
	char *result = calloc((maxLen + 2), sizeof(char));
	char *n1 = bigint_rev(num1);
	char *n2 = bigint_rev(num2);

	for (i = 0; i < maxLen; i++)
	{
		sum = carry;

		if (i < num1_len)
		{
			sum += n1[i] - '0';
		}

		if (i < num2_len)
		{
			sum += n2[i] - '0';
		}

		result[i] = sum % 10 + '0';
		carry = sum / 10;
	}

	if (carry > 0)
	{
		result[i] = carry + '0';
		i++;
	}

	result[i] = '\0';

	free(n1);
	free(n2);

	return bigint_rev(result);
}
