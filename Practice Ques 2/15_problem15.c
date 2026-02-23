/*
CQ17. Write a C program using for loop to print all prime numbers between
      1 and 100.
*/
#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    for(i = 2; i <= 100; i++) {   // loop from 2 to 100
        isPrime = 1;              // assume number is prime

        for(j = 2; j < i; j++) {  // check divisibility
            if(i % j == 0) {
                isPrime = 0;      // not prime 
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}