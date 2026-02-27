/*
15. Write a C program to find the value of e^x (exponential) and log(x)
    (natural logarithm) for a user-given value of x using math library.
*/
#include<stdio.h>
#include<math.h>

int main(){
    double n;

    printf("Enter value of x: ");
    scanf("%lf", &n);

    printf("e^x = %.4lf\n", exp(n));

    if(n > 0)
        printf("ln(x) = %.4lf\n", log(n));
    else
        printf("Natural log undefined for zero or negative numbers\n");

    return 0;
}
