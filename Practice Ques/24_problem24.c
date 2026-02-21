/*
CQ27. Write a C program to calculate the area of a circle using a symbolic
      constant for PI defined using #define.
*/
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of circle = %.2f\n", area);

    return 0;
}