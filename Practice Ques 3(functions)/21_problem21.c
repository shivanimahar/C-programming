/*
20. Write a recursive C function 'int sumDigits(int n)' that returns the sum
    of digits of a number.
accha hmara bas chale poore din esi guzar de jaanu pdte a
    Test: sumDigits(1234) = 10
*/

#include <stdio.h>

int sumDigits(int n) {
    if (n == 0)          // Base case
        return 0;
    else //1234
        return (n % 10) + sumDigits(n / 10);  //1234
        /*
        sumDigits(1234)
= 4 + sumDigits(123)

sumDigits(123)
= 3 + sumDigits(12)

sumDigits(12)
= 2 + sumDigits(1)

sumDigits(1)
= 1 + sumDigits(0)

sumDigits(0)
= 0   (base case)
        */
        // Recursive call
}

int main() {
    int num = 1234;
    printf("Sum of digits: %d", sumDigits(num));

    return 0;
}
