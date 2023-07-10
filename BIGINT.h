#ifndef BIGINT_H
#define BIGINT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(const char *num);
char *add_minus(const char *num);
char *remove_minus(const char *num);

int cmp(const char *num1, const char *num2, int num1_len, int num2_len);
int bigint_cmp(const char *num1, const char *num2);

char *add(const char *num1, const char *num2);
char *sub(const char *num1, const char *num2);
char *mul(const char *num1, const char *num2);
char *divi(const char *num1, const char *num2);

char *bigint_add(const char *num1, const char *num2);
char *bigint_sub(const char *num1, const char *num2);
char *bigint_mul(const char *num1, const char *num2);
char *bigint_div(const char *num1, const char *num2);
char *bigint_mod(const char *num1, const char *num2);


#endif /* BIGINT_H */
