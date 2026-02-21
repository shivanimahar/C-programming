/*
CQ26. Write a C program to demonstrate explicit type casting. Convert an
      int to float and a float to int, and observe the change.

*/
#include <stdio.h>

int main() {

    // Case 1: int to float
    int a = 7;
    float f = (float)a;
    printf("int to float : %d -> %.2f\n", a, f);

    // Case 2: float to int (decimal cut hoga)
    float x = 9.99;
    int n = (int)x;
    printf("float to int : %.2f -> %d\n", x, n);

    return 0;
}