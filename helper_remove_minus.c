#include "BIGINT.h"



char *remove_minus(const char *num)
{
	int num_len = strlen(num);
	char *copy = NULL;

	if (num[0] != '-')
	{
		return (NULL);
	}

	copy = malloc(num_len);
	if (!copy)
	{
		return (NULL);
	}

	copy = strcpy(copy, num + 1);

	return (copy);
}

