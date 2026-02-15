// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include<stdio.h>

int sum(int);

int sum(int n){
    return n*(n+1)/2;
}

int main(){
    int n;
    printf("n: ");
    scanf("%d",&n);
    float s = sum(n);
    printf("sum of first n natural numbers: %.1f",s);
    return 0;
}
