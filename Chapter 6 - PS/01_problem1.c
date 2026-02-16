/*
1. Write a program to print the address of a variable. Use this address to get the
value of the variable.
*/

#include<stdio.h>

int main(){
    int s = 34;
    int* m = &s;
    printf("address of s: %p \n",&s);
    printf("address of s: %p \n",m);
    printf("address of s: %d \n",*(&s));
    printf("address of s: %d",s);
    return 0; 


}
