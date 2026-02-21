/*
CQ21. Write a C program to check whether a given number is even or odd using
      the bitwise AND operator.

      Hint: if (n & 1) == 0, number is even.
*/
#include<stdio.h>
int main(){
    int a=2;
    if(a%2==0){
        printf("even");
    }
    else{
        printf("false");
    }
    return 0;


}