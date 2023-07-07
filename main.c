#include "BIGINT.h"

int main()
{
	char *num1 = "990";
	char *num2 = "1000";
	printf("%s : %s -> %d\n", num1, num2, bigint_cmp(num1, num2));
	printf("%s + %s -> %s\n", num1, num2, bigint_add(num1, num2));
	printf("%s - %s -> %s\n", num1, num2, bigint_sub(num1, num2));
	return (0);
}
