/*
CQ10. Write a C program to accept a 3-digit number and find the sum of
      its digits.

      Input:  123
      Output: Sum = 6
*/
#include<stdio.h>

int main(){
    int num, digit, sum = 0, temp;
    
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    
    temp = num; //123 // save original number, for swapping 
    
    while(temp != 0){ 
        digit = temp % 10;   // extract last digit
        sum = sum + digit;   // add to sum
        temp = temp / 10;    // remove last digit
    /*
    digit = 123 % 10 = 3
    sum   = 0 + 3    = 3
    temp  = 123 / 10 = 12 
    */ 

   }
    
    printf("Sum = %d\n", sum);
    return 0; 
    
}