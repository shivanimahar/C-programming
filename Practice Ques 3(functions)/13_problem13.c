/*
13. Write a C program using math functions to find the hypotenuse of a
    right-angled triangle given two sides a and b.

    Formula: h = sqrt(a*a + b*b)
*/
#include<stdio.h>
#include<math.h>

int main(){
    float a,  b;
    printf("a and b: ");
    scanf("%f %f",&a,&b);
    float h = sqrt((pow(a,2)) + pow(b,2));
    printf("%.2f",h);

    return 0;
}