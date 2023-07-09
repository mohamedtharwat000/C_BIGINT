#include "BIGINT.h"



int bigint_cmp(const char *num1, const char *num2)
{
	int num1_len = strlen(num1);
	int num2_len = strlen(num2);
	int cmp_i = 0;

	if (num1[0] != '-' && num2[0] != '-')
	{
		cmp_i = cmp(num1, num2, num1_len, num2_len);
		if (cmp_i > 0)
		{
			return (1);
		}
		if (cmp_i < 0)
		{
			return (-1);
		}
	}

	if (num1[0] == '-' && num2[0] == '-')
	{
		cmp_i = cmp(num2, num1, num2_len, num1_len);
		if (cmp_i > 0)
		{
			return (1);
		}
		if (cmp_i < 0)
		{
			return (-1);
		}
	}

	if (num1[0] == '-' && num2[0] != '-')
	{
		return (-1);
	}

	if (num1[0] != '-' && num2[0] == '-')
	{
		return (1);
	}

	return (0);
}
