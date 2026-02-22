/*
Write a C program using a while loop to print the first N natural
     numbers and their sum.

     Input:  N = 10
     Output: 1 2 3 4 5 6 7 8 9 10   Sum = 55
    */

#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    scanf("%d",&n);
    while(i<=n){
        
        sum += i;
        i++;
        
    }
       
     printf("sum: %d",sum);
    

    return 0;
}
