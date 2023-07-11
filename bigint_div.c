#include "BIGINT.h"

/**
 * bigint_div - Divides two big integer numbers.
 * @num1: The first big integer number.
 * @num2: The second big integer number.
 *
 * Return: A pointer to the quotient of the two numbers.
 */
char *bigint_div(const char *num1, const char *num2)
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

	if (bigint_cmp(num2, "0") == 0)
	{
		result = strdup("0");
		goto cleanup;
	}

	if (bigint_cmp(num1, "0") == 0)
	{
		result = strdup("0");
		goto cleanup;
	}

	if (bigint_cmp(num2, "1") == 0)
	{
		result = strdup(num1);
		goto cleanup;
	}

	if (bigint_cmp(num1, num2) == -1)
	{
		result = strdup("0");
		goto cleanup;
	}

	if (num1[0] != '-' && num2[0] != '-')
	{
		result = divi(num1_no_minus, num2_no_minus);
		goto cleanup;
	}

	if (num1[0] == '-' && num2[0] == '-')
	{
		result = divi(num1_no_minus, num2_no_minus);
		goto cleanup;
	}

	if (num1[0] != '-' && num2[0] == '-')
	{
		result = divi(num2_no_minus, num1_no_minus);
		tmp = result;
		result = add_minus(result);
		free(tmp);
		goto cleanup;
	}

	if (num1[0] == '-' && num2[0] != '-')
	{
		result = divi(num2_no_minus, num1_no_minus);
		tmp = result;
		result = add_minus(result);
		free(tmp);
		goto cleanup;
	}

cleanup:
	free(num1_no_minus);
	free(num2_no_minus);

	return result;
}
