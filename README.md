# BIGINT C Code Project

This project provides a library for handling big integer numbers in C. The library offers various operations such as addition, subtraction, multiplication, division, and comparison of big integer numbers.

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)
- [API Reference](#api-reference)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The BIGINT library allows you to perform arithmetic operations on large integer numbers, which are not natively supported by standard integer types in C. It provides functions to add, subtract, multiply, divide, and compare big integer numbers. The library handles numbers of arbitrary length, limited only by available memory.

## Installation

To use the BIGINT library in your C project, follow these steps:

1. Download or clone the repository.
2. Copy the `BIGINT.h` header file and the implementation files (`bigint_add.c`, `bigint_sub.c`, `bigint_mul.c`, `bigint_div.c`, `bigint_cmp.c`, `base_add.c`, `base_sub.c`, `base_mul.c`, `base_div.c`, `base_cmp.c`) into your project directory.
3. Include the `BIGINT.h` header file in your source code: `#include "BIGINT.h"`.
4. Compile your project and link it with the BIGINT library.

## Usage

1. Include the `BIGINT.h` header file in your source code: `#include "BIGINT.h"`.
2. Use the provided functions to perform operations on big integer numbers.
3. Make sure to free any dynamically allocated memory returned by the library functions to avoid memory leaks.

## API Reference

### `char* bigint_add(const char* num1, const char* num2)`

This function adds two big integer numbers and returns a pointer to the sum.

### `char* bigint_sub(const char* num1, const char* num2)`

This function subtracts two big integer numbers and returns a pointer to the result of the subtraction.

### `char* bigint_mul(const char* num1, const char* num2)`

This function multiplies two big integer numbers and returns a pointer to the product.

### `char* bigint_div(const char* num1, const char* num2, char** reminder)`

This function divides two big integer numbers and returns a pointer to the quotient. It also stores the remainder in the `reminder` parameter.

### `int bigint_cmp(const char* num1, const char* num2)`

This function compares two big integer numbers and returns:

- A value greater than 0 if `num1` is greater than `num2`.
- A value less than 0 if `num2` is greater than `num1`.
- 0 if the numbers are equal.

## Examples

Here are some examples demonstrating the usage of the BIGINT library:

```c
#include <stdio.h>
#include "BIGINT.h"

int main() {
    const char* num1 = "12345678901234567890";
    const char* num2 = "98765432109876543210";

    char* sum = bigint_add(num1, num2);
    printf("Sum: %s\n", sum);
    free(sum);

    char* difference = bigint_sub(num2, num1);
    printf("Difference: %s\n", difference);
    free(difference);

    char* product = bigint_mul(num1, num2);
    printf("Product: %s\n", product);
    free(product);

    char* quotient;
    char* remainder;
    quotient = bigint_div(num2, num1, &remainder);
    printf("Quotient: %s, Remainder: %s\n", quotient, remainder);
    free(quotient);
    free(remainder);

    int comparison = bigint_cmp(num1, num2);
    printf("Comparison: %d\n", comparison);

    return 0;
}
```

## Todo List

- [x] `cmp`
- [x] `add`
- [x] `sub`
- [x] `mul`
- [ ] `div`
- [ ] `mod`

## Contributing

Contributions are welcome! Here are some ways you can contribute to this project:

- Report bugs and issues by creating a new GitHub issue.
- Fix bugs and issues by submitting pull requests.
- Add new validation functionality to enhance the form's capabilities.
- Improve styling and overall user experience.
- Refactor code to improve code quality and maintainability.
- Write documentation and improve existing docs to help others understand the project.

To contribute:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them.
4. Push your branch to your forked repository.
5. Submit a pull request, describing your changes in detail.

I will review pull requests and provide feedback.

## License

This project is open source and available under the [MIT License](LICENSE).

## Credits

Created by [Mohamed Tharwat](https://github.com/mohamedtharwat000). Feel free to reach out with any questions or feedback.
