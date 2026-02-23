/*
CQ11. Write a C program using a while loop to find whether a number is
      a palindrome or not.

      Input:  121
      Output: 121 is a Palindrome
*/
#include <stdio.h>

int main() {
    int num, digit, org, reversed = 0;  // add reversed

    printf("Enter a number: ");
    scanf("%d", &num);
    org = num;  // save original , 123

    while (num != 0) {
        digit = num % 10; //last num, 3
        reversed = reversed * 10 + digit;  // BUILD reversed ,0*10 + 3=3, 3*10 + 2=32, 32*10 + 1 = 321
        num = num / 10; //12, 1,0
    }

    if (reversed == org) {  // compare reversed with org
        printf("%d is a palindrome", org);
    } else {
        printf("%d is not a palindrome", org);
    }

    return 0;
}