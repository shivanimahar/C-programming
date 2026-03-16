/*
2. Write a C program with a function 
   'isPrime(int n)' that returns
    1 if the
   number is prime andddd 0 otherwise. 
   Call it from main() for numbers 1 to 20
   and 
   print only prime numbers.

   Expected Output: 2 3 5 7 11 13 17 19
*/
#include <stdio.h>

int isPrime(int n) {

    if (n <= 1) return 0;  // 0 and 1,they are not primee
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) { 
            return 0;  // divisible, it is not prime
        }
    }
    return 1;  // prime 
}


int isPrime(int n);

int main() {
    printf("Prime numbers from 1 to 20: ");
    for (int i = 1; i <= 20; i++) {
        if (isPrime(i) == 1) { 
            printf("%d ", i); 
        }
    }
    printf("\n");
    return 0;
}