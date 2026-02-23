/*
CQ13. Write a C program using a for loop to check if a number is prime.

      Input:  7
      Output: 7 is a Prime Number
*/
#include <stdio.h>


int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++){ 
        if (num % i == 0) {
            isPrime = 0; //false 
            break;
        }
    }

    if (isPrime == 1)  
        printf("%d is a Prime number", num);
    else
        printf("%d is Not a Prime number", num);

    return 0;
}