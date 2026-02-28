/*
16. Write a recursive C function to compute the factorial of a number n.
    Use it to print factorials of 1 through 10.

    Expected Output:
    1! = 1
    2! = 2
    ...
    10! = 3628800
*/

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d! = %d\n", i, factorial(i));
    }

    return 0;
}