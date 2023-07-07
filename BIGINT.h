#ifndef BIGINT_H
#define BIGINT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *bigint_rev(const char *num);
char *bigint_add(const char *num1, const char *num2);
char *bigint_sub(const char *num1, const char *num2);
char *bigint_mul(const char *num1, const char *num2);
char *bigint_div(const char *num1, const char *num2);
char *bigint_mod(const char *num1, const char *num2);
int bigint_cmp(const char *num1, const char *num2);

#endif /* BIGINT_H */
