/* 3. Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit). */
#include<stdio.h>

int main(){
    // F = (9/5) * ( C ) + 32
    float C,F ;
    printf("enter celcius");
    scanf(" %f",&C);
    F =  ((9.0/5.0)*C) + 32;
    printf("THe value of %.2fc in f is %.2f : ",C,F);

    return 0;


}
