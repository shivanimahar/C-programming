/*
14. Write a C program to compute and display: sin(30°), cos(60°), tan(45°)
    using math library functions. Note: Convert degrees to radians first.
    (π radians = 180 degrees)
*/ 
#include<stdio.h>
#include<math.h>

int main() {

    double sin30, cos60, tan45;

    sin30 = sin(30 * 3.14 / 180);
    cos60 = cos(60 * 3.14 / 180);
    tan45 = tan(45 * 3.14 / 180);

    printf("sin(30°) = %.2lf\n", sin30);
    printf("cos(60°) = %.2lf\n", cos60);
    printf("tan(45°) = %.2lf\n", tan45);

    return 0;
}