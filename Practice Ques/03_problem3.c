// CQ3. Write a C program to swap two numbers WITHOUT using a temporary variable.

#include<stdio.h>
int main(){
    int a = 10, b = 20;
    a = a+b; //10 + 20 = 30
    b= a-b; // 30 - 20 = 10
    a = a-b; // 30 - 10 = 20 
    printf("a: %d\n",a);
    printf("b: %d",b);
    return 0;

}

