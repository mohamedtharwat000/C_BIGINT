#include "BIGINT.h"

/**
 * bigint_sub - Subtracts two big integer numbers.
 * @num1: The first big integer number.
 * @num2: The second big integer number.
 *
 * Return: A pointer to the result of the subtraction.
 */

char *bigint_sub(const char *num1, const char *num2)
{
	char *result = NULL, *tmp = NULL;
	char *num1_no_minus = remove_minus(num1);
	char *num2_no_minus = remove_minus(num2);

	if (num1_no_minus == NULL)
	{
		num1_no_minus = strdup(num1);
	}

	if (num2_no_minus == NULL)
	{
		num2_no_minus = strdup(num2);
	}

	if (bigint_cmp(num1, num2) == 0)
	{
		result = sub(num1_no_minus, num2_no_minus);
	}

	if (num1[0] != '-' && num2[0] != '-')
	{
		if (bigint_cmp(num1_no_minus, num2_no_minus) == 1)
		{
			result = sub(num1_no_minus, num2_no_minus);
		}

		if (bigint_cmp(num1_no_minus, num2_no_minus) == -1)
		{
			result = sub(num2_no_minus, num1_no_minus);
			result = add_minus(result);
		}
	}

	if (num1[0] == '-' && num2[0] == '-')
	{
		if (bigint_cmp(num1_no_minus, num2_no_minus) == 1)
		{
			result = sub(num1_no_minus, num2_no_minus);
			tmp = result;
			result = add_minus(result);
			free(tmp);
		}

		if (bigint_cmp(num1_no_minus, num2_no_minus) == -1)
		{
			result = sub(num2_no_minus, num1_no_minus);
		}
	}

	if (num1[0] == '-' && num2[0] != '-')
	{
		result = add(num1_no_minus, num2_no_minus);
		tmp = result;
		result = add_minus(result);
		free(tmp);
	}

	if (num1[0] != '-' && num2[0] == '-')
	{
		result = add(num1_no_minus, num2_no_minus);
	}

	free(num1_no_minus);
	free(num2_no_minus);

	return (result);
}
