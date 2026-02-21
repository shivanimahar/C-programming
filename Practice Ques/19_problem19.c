/*
CQ22. Write a C program to swap two numbers using the XOR bitwise operator
      (without a third variable).
*/

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b); 
    // XOR returns 1 if bits are DIFFERENT, 0 if bits are SAME.,  numbers in binary(in the backend)
    

    a = a ^ b;
    b = a ^ b;
    a = a ^ b; 

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0; 
}