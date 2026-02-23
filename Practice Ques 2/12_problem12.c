/*
CQ14. Write a C program to print the Fibonacci series up to N terms using
      a for loop.

      Input:  8
      Output: 0 1 1 2 3 5 8 13
*/
#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, next; 

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) { // i n tk chlega
        printf("%d ", a);
        next = a + b;  // next term, 0+1=1, 1(sum of 0+1)+1(next term,after 0)=2 ,1+2=3(next),2+3=5(next),3+5=8,5+7=13 
        a = b;         // shift, 1,1,2,3,5,8
        b = next;      // shift, 1,2,3,5,8,13
    }

    return 0;
}