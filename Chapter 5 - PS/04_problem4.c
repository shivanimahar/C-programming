// 4. Write a program using recursion to calculate nth element of Fibonacci series.

#include<stdio.h>
int fibbo(int);

int fibbo(int n){
    if(n == 1 || n==2){
        return n-1;
    }
    return fibbo(n-1) + fibbo(n-2);
}

int main(){
    int n;
    printf("print n: ");
    scanf("%d",&n);
    int fib = fibbo(n);
    printf("fibo will be : %d",fib);
    return 0;

}

