/*
CQ20. Write a C program to demonstrate all bitwise operators:
      & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), >> (right shift)
      using two integer variables.
*/
#include<stdio.h>
int main(){
    int a = 5, b = 3;

    /*
        a = 5 = 0101 (in binary)
        b = 3 = 0011 (in binary)
    */

    printf("a = %d, b = %d\n\n", a, b);

    printf("a & b  (AND)        = %d\n", a & b);   // 0101 & 0011 = 0001 = 1
    printf("a | b  (OR)         = %d\n", a | b);   // 0101 | 0011 = 0111 = 7
    printf("a ^ b  (XOR)        = %d\n", a ^ b);   // 0101 ^ 0011 = 0110 = 6
    printf("~a     (NOT)        = %d\n", ~a);       // ~0101 = -(a+1) = -6
    printf("a << 1 (Left Shift) = %d\n", a << 1);  // 0101 << 1 = 1010 = 10
    printf("a >> 1 (Right Shift)= %d\n", a >> 1);  // 0101 >> 1 = 0010 = 2

    return 0;
}