/*
12. Write a C program that reads a floating point number and prints:
    - Its floor value
    - Its ceiling value
    - Its absolute value
    - Its square root
    Use appropriate math library functions.
*/
#include<stdio.h>
#include<math.h>

int main(){
    float a=10.00;
    printf("floor value %f\n",floor(a));
    printf("ceil value %lf\n",ceil(a));
    printf("absolute value %f\n",fabs(a));
    printf("square value %f\n",sqrt(a));

    return 0;

}
