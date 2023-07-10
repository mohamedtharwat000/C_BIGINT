#include "BIGINT.h"

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

int main()
{
	printf("Testing bigint_add:\n");
	test_bigint_add("1234567890123456789", "9876543210987654321", "11111111101111111110");

	printf("\nTesting bigint_sub:\n");
	test_bigint_sub("1234567890123456789", "9876543210987654321", "-8641975320864197532");

	printf("\nTesting bigint_cmp:\n");
	test_bigint_cmp("1234567890123456789", "9876543210987654321", -1);

	printf("\nTesting bigint_mul:\n");
	test_bigint_mul("1234567890123456789", "9876543210987654321", "12193263113702179522374638011112635269");

	printf("\nTesting bigint_div:\n");
	test_bigint_div("12193263113702179522374638011112635269", "9876543210987654321", "1234567890123456789");

	return 0;
}

