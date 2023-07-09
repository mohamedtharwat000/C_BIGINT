#include "BIGINT.h"



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
