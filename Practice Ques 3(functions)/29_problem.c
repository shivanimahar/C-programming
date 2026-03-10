/*
29. Write a C program to demonstrate the 'register' storage class by declaring
    a loop counter as a register variable and using it to compute the sum of
    first N natural numbers.

    Test: N = 100, Sum = 5050
*/
// register storage class - to store i in a CPU register instead of RAM., execution faster.

#include <stdio.h>

int main() {
    register int i;   // register variable for loop counter
    int N = 100;
    int sum = 0;

    for(i = 1; i <= N; i++) {
        sum = sum + i;
    }

    printf("N = %d\n", N);
    printf("Sum = %d\n", sum);

    return 0;
}
