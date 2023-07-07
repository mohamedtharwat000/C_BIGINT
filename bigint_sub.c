#include "BIGINT.h"

/**
 * bigint_sub - Subtracts two bigint numbers.
 * @num1: The first bigint number.
 * @num2: The second bigint number.
 *
 * Return: A pointer to the result of the subtraction.
 */
char *bigint_sub(const char *num1, const char *num2)
{
	int num1_len = strlen(num1);
	int num2_len = strlen(num2);
	int maxLen = (num1_len > num2_len) ? num1_len : num2_len;
	int subtraction = 0, carry = 0, i = 0, b = 0, s = 0;
	char *result = calloc((maxLen + 2), sizeof(char));
	char *tmp = NULL;
	char *n1 = bigint_rev(num1);
	char *n2 = bigint_rev(num2);

	if (bigint_cmp(num1, num2) >= 0)
	{
		for (i = 0; i < maxLen; i++)
		{
			b = (i < num1_len) ? (n1[i] - '0') : 0;
			s = (i < num2_len) ? (n2[i] - '0') : 0;

			if (carry == 1)
			{
				carry = 0;
				if (b == 0)
				{
					b = b + 9;
					carry = 1;
				}
				else
				{
					b = b - 1;
				}
			}

			if (b < s)
			{
				carry = 1;
				subtraction = (b + 10) - s;
			}
			else
			{
				subtraction = b - s;
			}

			result[i] = subtraction + '0';
			subtraction = 0;
		}

		result[i] = '\0';

		while (i > 0 && result[i - 1] == '0')
		{
			result[i - 1] = '\0';
			i--;
		}
	}
	else
	{
		free(result);
		tmp = bigint_sub(num2, num1);
		result = bigint_rev(tmp);
		free(tmp);
		tmp = calloc(strlen(result) + 2, sizeof(char));
		strcpy(tmp, result);
		tmp[strlen(result)] = '-';
		tmp[strlen(result) + 1] = '\0';
		result = tmp;
	}

	free(n1);
	free(n2);

	return bigint_rev(result);
}
