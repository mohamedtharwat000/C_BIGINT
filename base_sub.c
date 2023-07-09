#include "BIGINT.h"



char *sub(const char *num1, const char *num2)
{
	int num1_len = strlen(num1), num2_len = strlen(num2);
	int maxLen = (num1_len > num2_len) ? num1_len : num2_len;
	int subtraction = 0, carry = 0, i = 0, num_first = 0, num_second = 0;
	char *n1 = reverse(num1), *n2 = reverse(num2);
	char *result = NULL;

	result = calloc((maxLen + 2), sizeof(char));
	if (result == NULL)
	{
		free(n1);
		free(n2);
		return (NULL);
	}

	for (i = 0; i < maxLen; i++)
	{

		num_first = (n1[i] - '0');
		num_second = (n2[i] - '0');

		if (carry == 1)
		{
			if (num_first == 0)
			{
				num_first = num_first + 9;
				carry = 1;
			}
			else
			{
				num_first = num_first - 1;
				carry = 0;
			}
		}

		if (num_first < num_second)
		{
			subtraction = (num_first + 10) - num_second;
			carry = 1;
		}
		else
		{
			subtraction = num_first - num_second;
		}

		result[i] = subtraction + '0';

	}

	result[i] = '\0';
	i--;

	while (i > 0 && result[i] == '0')
	{
		result[i] = '\0';
		i--;
	}

	free(n1);
	free(n2);

	return (reverse(result));
}
