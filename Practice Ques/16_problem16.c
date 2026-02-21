/*
CQ19. Write a C program to find the absolute value of a number using the
      ternary operator (without using abs() function).
*/
#include<stdio.h>
int main(){
    int n;
    printf("n: ");
    scanf("%d",&n);
    n<0?printf("%d",-n):printf("%d",n);

    return 0;
}