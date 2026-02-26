/*
11. Write a C program to find the distance between two points (x1,y1) and
    (x2,y2) using the sqrt() and pow() functions from <math.h>.

    Formula: distance = sqrt((x2-x1)^2 + (y2-y1)^2) 
*/
#include<stdio.h>
#include<math.h>

int main(){
    double x1, y1, x2, y2, distance;

    printf("Enter x1 y1 x2 y2: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance = %.2lf", distance);

    return 0;
}

