/*
1. Write a C program using a function prototype to calculate and return the
   area of a rectangle. Accept length and breadth as parameters.

   Expected Output: Area of rectangle = 50 (for length=10, breadth=5)
*/ 
#include<stdio.h>

float area_rect(float , float );

float area_rect(float l, float b){
    return l * b;
}

int main(){
    float l,b;
    printf("l and b type kro: ");
    scanf("%f %f",&l,&b);
    float area = area_rect(l,b);
    printf("area: %.2f ",area);
    return 0;
}
