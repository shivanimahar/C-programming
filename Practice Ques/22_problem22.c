/*
CQ25. Write a C program to demonstrate implicit type conversion (coercion)
      by performing integer division vs float division.

      Example: 7/2 vs 7.0/2 — show the difference
*/ 
#include <stdio.h>

int main() {
    int a = 7, b = 2;
    float result;

    // Case 1: Integer division
    result = a / b; 
    printf("Integer division  : %d / %d = %.1f\n", a, b, result);

    // Case 2: Float division (implicit coercion)
    result = 7.0 / b; 
    printf("Float division    : 7.0 / %d = %.1f\n", b, result);

    // Case 3: Explicit cast
    result = (float)a / b;
    printf("Explicit cast     : (float)%d / %d = %.1f\n", a, b, result);

    return 0;
}