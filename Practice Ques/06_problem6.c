/*
CQ7. Write a C program to calculate the area and perimeter of a rectangle
     given its length and breadth.

     Formula: Area = l * b, Perimeter = 2*(l+b)
*/

#include<stdio.h>
int main(){
    float l=2.0,b=3.0;
    float a=l*b;
    float p=2*(l+b);
    printf("a: %.2f\n",a);
    printf("p: %.2f\n",p);
    return 0;
}