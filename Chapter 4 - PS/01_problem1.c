// 1. Write a program to print multiplication table of a given number n.

#include<stdio.h>

int main(){
    int n;
    printf("print number to find mul: \n");
    scanf("%d",&n);
    for (int i = 0; i<=10;i++){
        printf("%d X %d will be %d\n",n,i,n*i);
    }
    return 0;
}
