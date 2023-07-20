#include "BIGINT.h"

void test_bigint_cmp(const char *num1, const char *num2, int expected)
{
	int result = bigint_cmp(num1, num2);
	printf("Comparing %s and %s: ", num1, num2);
	if (result == expected)
	{
		printf("PASSED\n");
	}
	else
	{
		printf("FAILED\n");
		printf("Expected: %d\n", expected);
		printf("Actual: %d\n", result);
	}
}

void test_bigint_add(const char *num1, const char *num2, const char *expected)
{
	char *result = bigint_add(num1, num2);
	printf("Adding %s and %s: ", num1, num2);
	if (strcmp(result, expected) == 0)
	{
		printf("PASSED\n");
	}
	else
	{
		printf("FAILED\n");
		printf("Expected: %s\n", expected);
		printf("Actual: %s\n", result);
	}
	free(result);
}

void test_bigint_sub(const char *num1, const char *num2, const char *expected)
{
	char *result = bigint_sub(num1, num2);
	printf("Subtracting %s from %s: ", num2, num1);
	if (strcmp(result, expected) == 0)
	{
		printf("PASSED\n");
	}
	else
	{
		printf("FAILED\n");
		printf("Expected: %s\n", expected);
		printf("Actual: %s\n", result);
	}
	free(result);
}

void test_bigint_mul(const char *num1, const char *num2, const char *expected)
{
	char *result = bigint_mul(num1, num2);
	printf("Multiplying %s and %s: ", num1, num2);
	if (strcmp(result, expected) == 0)
	{
		printf("PASSED\n");
	}
	else
	{
		printf("FAILED\n");
		printf("Expected: %s\n", expected);
		printf("Actual: %s\n", result);
	}
	free(result);
}

void test_bigint_div(const char *num, const char *divisor, const char *expected)
{
	char *result = bigint_div(num, divisor);
	printf("Dividing %s by %s: ", num, divisor);
	if (strcmp(result, expected) == 0)
	{
		printf("PASSED\n");
	}
	else
	{
		printf("FAILED\n");
		printf("Expected: %s\n", expected);
		printf("Actual: %s\n", result);
	}
	free(result);
}

void test_bigint_mod(const char *num, const char *divisor, const char *expected)
{
	char *result = bigint_mod(num, divisor);
	printf("Modulo of %s by %s: ", num, divisor);
	if (strcmp(result, expected) == 0)
	{
		printf("PASSED\n");
	}
	else
	{
		printf("FAILED\n");
		printf("Expected: %s\n", expected);
		printf("Actual: %s\n", result);
	}
	free(result);
}

int main()
{
	printf("\nTesting bigint_cmp:\n");
	test_bigint_cmp("1234567890", "9876543210", -1);

	printf("Testing bigint_add:\n");
	test_bigint_add("1234567890", "9876543210", "11111111100");

	printf("\nTesting bigint_sub:\n");
	test_bigint_sub("9876543210", "1234567890", "8641975320");

	printf("\nTesting bigint_mul:\n");
	test_bigint_mul("1234567890", "9876543210", "12193263111263526900");

	/*printf("\nTesting bigint_div:\n");
	test_bigint_div("0", "12193263113702179522374638011112635269", "0");
	test_bigint_div("12193263113702179522374638011112635269", "0", "0");
	test_bigint_div("12193263113702", "12193263113702179522374638011112635269", "0");
	test_bigint_div("12193263113702179522374638011112635269", "1", "12193263113702179522374638011112635269");
	test_bigint_div("444", "2", "222");
	test_bigint_div("1000000000000000000000000000", "10", "100000000000000000000000000");
	test_bigint_div("999999999999999999999999999", "3", "333333333333333333333333333");
	test_bigint_div("123456789012345678901234567890", "987654321", "125000002");
	test_bigint_div("987654321098765432109876543210", "123456789", "800000001");
	test_bigint_div("999999999999999999999999999", "1000000000", "999999999");
	test_bigint_div("123456789012345678901234567890", "123456789", "1000000000");*/

	return 0;
}

