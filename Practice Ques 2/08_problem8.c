/*
CQ10. Write a C program using a while loop to reverse the digits of a
      number.

      Input:  12345
      Output: 54321
*/
#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num); //123

    printf("Reversed number: ");
    while (num != 0) {
        digit = num % 10; //last digit= 3
        printf("%d", digit);
        num = num/10; // 12
    } 

    printf("\n");

    return 0;
} 