/*
10. Write a C program to calculate simple interest using a function
    'void calcSI(float p, float r, float t, float *si)' where si is
    returned through a pointer parameter.

    Formula: SI = (P * R * T) / 100
*/
#include<stdio.h>

void calcSI(float, float, float, float *si);

void calcSI(float p, float r, float t, float *si){
    *si = (p * r * t)/100;
}

int main(){
    float p, r, t,si;
    printf("enter p r t: ");
    scanf("%f %f %f",&p, &r,&t);
    calcSI(p,r,t,&si);
    printf("%.2f",si);
    return 0;
}

