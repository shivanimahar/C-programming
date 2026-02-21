/*
CQ8. Write a C program to calculate simple interest.

     Formula: SI = (P * R * T) / 100
*/

#include<stdio.h>
int main(){
    int p=12,r=34,t=56;
    float si = (p * r * t) / 100;
    printf("si: %f",si); 
    return 0;
}