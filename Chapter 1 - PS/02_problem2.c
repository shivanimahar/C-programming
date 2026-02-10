/* 2. Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height. */
#include<stdio.h>
int main(){
    int r =3;
    int h = 5;
    float area = 3.14 * r * r;
    float vol = 3.14 * r * r * h;
    printf("the area will be %.2f ",area);
    printf("the vol of cylinder will be %.2f ",vol);
    return 0;
}