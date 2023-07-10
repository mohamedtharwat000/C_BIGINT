#include "BIGINT.h"

/**
 * bigint_mul - Multiplies two big integer numbers.
 * @num1: The first big integer number.
 * @num2: The second big integer number.
 *
 * Return: A pointer to the product of the two numbers.
 */

char *bigint_mul(const char *num1, const char *num2)
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

	if (num1[0] != '-' && num2[0] != '-')
	{
		result = mul(num1_no_minus, num2_no_minus);
	}

	if (num1[0] == '-' && num2[0] == '-')
	{
		result = mul(num1_no_minus, num2_no_minus);
	}

	if (num1[0] != '-' && num2[0] == '-')
	{
		result = mul(num2_no_minus, num1_no_minus);
		tmp = result;
		result = add_minus(result);
		free(tmp);
	}

	if (num1[0] == '-' && num2[0] != '-')
	{
		result = mul(num2_no_minus, num1_no_minus);
		tmp = result;
		result = add_minus(result);
		free(tmp);
	}

	free(num1_no_minus);
	free(num2_no_minus);

	return (result);
}

