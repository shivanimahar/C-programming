// 1. Write a program using function to find average of three numbers.
#include<stdio.h>

float avg(float , float , float );

float avg(float a, float b, float c){
    return (a+b+c)/3;
}

int main(){
    float a;
    float b;
    float c;
    float d;
    printf("enter: ");
   
    scanf("%f%f%f",&a,&b,&c);

   
    d = avg(a,b,c);
    printf("avg will be %.3f",d);
    return 0;

}
