# Big Integer Library

The Big Integer Library is a C code library that provides functions for performing mathematical operations on big integers represented as strings. This library can handle large numbers without the risk of overflowing and provides accurate results.

## Functions

The library provides the following functions:

### `char *bigint_add(const char *num1, const char *num2);`

Adds two big integer numbers and returns the result as a string.

Example Usage:

```c
char *result = bigint_add("11111111111111111111", "22222222222222222222");
printf("%s\n", result); // Output: 33333333333333333333
free(result);
```

### `char *bigint_sub(const char *num1, const char *num2);`

Subtracts two big integer numbers and returns the result as a string.

Example Usage:

```c
char *result = bigint_sub("22222222222222222222", "11111111111111111111");
printf("%s\n", result); // Output: 11111111111111111111
free(result);
```

### `char *bigint_mul(const char *num1, const char *num2);`

Multiplies two big integer numbers and returns the result as a string.

Example Usage:

```c
char *result = bigint_mul("11111111111111111111", "22222222222222222222");
printf("%s\n", result); // Output: 2469135802469135804423456790123456798
free(result);
```

### `int bigint_cmp(const char *num1, const char *num2);`

Compares two big integer numbers and returns 1 if num1 is greater, -1 if num2 is greater, or 0 if they are equal.

Example Usage:

```c
int result = bigint_cmp("22222222222222222222", "11111111111111111111");
printf("%d\n", result); // Output: 1
```

## Todo List

- [x] `cmp`
- [x] `add`
- [x] `sub`
- [x] `mul`
- [ ] `div`
- [ ] `mod`
