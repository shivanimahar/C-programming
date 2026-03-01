/*

17. Write a recursive C function to print the Fibonacci series up to n terms.
    
    Input: n = 8
    Output: 0 1 1 2 3 5 8 13
*/
#include<stdio.h>

int fibo(int n){ //4
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibo(n-1) + fibo(n-2); //recursion logic //fib(3) + fibo(2) = (0 + 1 + 1) + (0 + 1 ) = 3 = this means fibo(3) = 0,1,1,2
    }
}
/*
    0,1,1,2,3,5,8,13,21,34 
    1 + 1
    1 + 0 
    2
    1
    3
*/

int main(){
    int n,i;
    printf("n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("%d\n",fibo(i));

    }
    return 0;
}
