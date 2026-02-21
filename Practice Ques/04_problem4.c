/*
CQ4. Write a C program to convert temperature from Celsius to Fahrenheit.

     Formula: F = (C * 9/5) + 32
*/
#include<stdio.h>

int main(){
    float c; 
    printf("celcius: ");
    scanf("%f",&c); // (%.2f) precision not allowed in scanf
    float F = (c * 9/5) + 32;
    printf("fahrenheit: %.2f", F);
    return 0;
}