#include "BIGINT.h"

/**
 * add - Adds two big integer numbers.
 * @num1: The first big integer number.
 * @num2: The second big integer number.
 *
 * Return: A pointer to the sum of the two numbers.
 */

char *add(const char *num1, const char *num2)
{
	int num1_len = strlen(num1), num2_len = strlen(num2);
	int maxLen = (num1_len > num2_len) ? num1_len : num2_len;
	int sum = 0, carry = 0, i = 0;
	char *result = NULL, *n1 = reverse(num1), *n2 = reverse(num2);

	result = malloc(maxLen + 2);
	if (result == NULL)
	{
		free(n1);
		free(n2);
		return (NULL);
	}

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

		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}

		result[i] = sum + '0';
	}

	if (carry > 0)
	{
		result[i] = carry + '0';
		i++;
	}

	result[i] = '\0';

	free(n1);
	free(n2);

	return (reverse(result));
}
