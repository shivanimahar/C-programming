/*
3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2. 
*/

#include<stdio.h>

float forcee(float);

float forcee(float m){
    return m*9.8;

}

int main(){
    float m;
    printf("enter m: ");
    scanf("%f",&m);
    float force = forcee(m);
    printf("force will be: %.1f",force);
    return 0 ;
}