#include "BIGINT.h"

/**
 * mul - Multiplies two big integer numbers.
 * @num1: The first big integer number.
 * @num2: The second big integer number.
 *
 * Return: A pointer to the product of the two numbers.
 */
char *mul(const char *num1, const char *num2)
{
	int num1_len = strlen(num1), num2_len = strlen(num2);
	int maxLen = num1_len + num2_len;
	int sum = 0, carry = 0, i = 0, j = 0, tmp = 0;
	char *result = NULL, *n1 = reverse(num1), *n2 = reverse(num2);

	result = malloc((maxLen + 1) * sizeof(char));
	if (result == NULL)
	{
		free(n1);
		free(n2);
		return NULL;
	}
	result[maxLen] = '\0';

	for (i = 0; i < maxLen; i++)
	{
		result[i] = '0';
	}

	for (i = 0; i < num2_len; i++)
	{
		carry = 0;

		for (j = 0; j < num1_len; j++)
		{
			sum = ((n1[j] - '0') * (n2[i] - '0') + carry + (result[i + j] - '0'));
			carry = sum / 10;
			result[i + j] = (sum % 10) + '0';
		}

		while (carry > 0)
		{
			sum = carry + (result[i + j] - '0');
			carry = sum / 10;
			result[i + j] = (sum % 10) + '0';
		}
	}

	tmp = i + j - 1;
	while (tmp > 0 && result[tmp] == '0')
	{
		result[tmp] = '\0';
		tmp -= 1;
	}

	free(n1);
	free(n2);

	return reverse(result);
}
