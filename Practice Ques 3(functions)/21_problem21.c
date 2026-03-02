/*
20. Write a recursive C function 'int sumDigits(int n)' that returns the sum
    of digits of a number.

    Test: sumDigits(1234) = 10
*/

#include <stdio.h>

int sumDigits(int n) {
    if (n == 0)          // Base case
        return 0;
    else 
        return (n % 10) + sumDigits(n / 10);  // 4 + 123
        // Recursive call
}

int main() {
    int num = 1234;
    printf("Sum of digits: %d", sumDigits(num));
    return 0;
}
