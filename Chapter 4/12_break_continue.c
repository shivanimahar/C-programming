#include<stdio.h>
int main(){
    for (int i=0; i<15; i++)
    {
        if(i==5){
            // break; //exit the loop now!
            continue; //exit this iteration now
        }
        printf("i is %d\n",i);
    } // for any for loop if it starts from 0 then it will end till n it will give values from 0 to n-1
    printf("For loop is done!");
    return 0;
}