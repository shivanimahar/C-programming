/*
CQ6. Write a C program to accept two integers from the user and display
     their sum, difference, product, quotient, and remainder.
*/

#include<stdio.h>
int main(){
    int a, b;
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("sum: %d\n",a+b);
    printf("difference: %d\n",a-b);
    printf("product: %d\n",a*b);
    printf("quotient: %d\n",a/b); 
    printf("remainder: %d\n",a%b);
    
    return 0;
}