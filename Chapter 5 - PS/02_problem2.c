// 2. Write a function to convert Celsius temperature into Fahrenheit
#include<stdio.h>

float tempp(float);

float tempp(float c){
    return (c * 9/5) + 32;
}

int main(){
    float c;
    printf("enter c:                  ");
    scanf("%f",&c);
    float f = tempp(c);
    printf("temp will be: %.2f",f);
    return 0;
    
}