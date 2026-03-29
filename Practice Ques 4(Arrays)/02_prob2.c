/*
Write a C program to initialize a float array with the first 8 Fibonacci numbers (as floats) without
using any loop — use direct initializer list syntax. Print each value with 2 decimal places.
Hint: float arr[] = {0.0, 1.0, 1.0, ...};
*/
#include <stdio.h>

int main(){
    float arr[] = {0.0, 1.0, 1.0, 2.0, 3.0, 5.0, 8.0, 13.0};
    for (int i = 0; i<8;i++){
        printf("%.2f\n",arr[i]);
    }
    return 0;

}