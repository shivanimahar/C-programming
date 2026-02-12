// 8. Write a program to calculate the factorial of a given number using a for loop.

#include<stdio.h>

int main(){
    int i, fact = 1, n;
    printf("write num: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        fact *= i;
    }
    printf("factorial will be: %d",fact);
    return 0;
}
