/*
Q2. Write a C program to swap two numbers using a temporary variable.

     Input:  a = 5, b = 10
     Output: a = 10, b = 5
*/
#include<stdio.h>
int main(){
    int a=5;
    int b=10;
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("temp: %d\n",temp);

    return 0;
}


