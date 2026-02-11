// 2. Write a program to print multiplication table of 10 in reversed order.

#include<stdio.h>

int main(){
    int n;
    printf("write a num: \n");
    scanf("%d", &n);
    for (int i=n;i>=0;i--){
        printf("%d X %d will be %d: \n",n,i,n*i);
    }
    return 0;
}
