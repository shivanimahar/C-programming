/*
18. Write a recursive C function 'int power(int base, int exp)' that computes
    base^exp without using the math library.

    Test: power(2, 8) = 256
*/
#include <stdio.h>

// Recursive function to calculate power
int power(int base, int exp) {
    if (exp == 0)
        return 1;               // Base case
    else
        return base * power(base, exp - 1);  // Recursive call, base^exp = base × base^(exp-1)
}

int main() {
    int base = 2, exp = 8;

    printf("power(%d, %d) = %d\n", base, exp, power(base, exp));

    return 0;
}