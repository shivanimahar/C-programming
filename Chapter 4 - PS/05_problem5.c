// 5. Write a program to sum first ten natural numbers using while loop.

#include<stdio.h>

int main(){ 
    int i=1;
    int sum = 0;
    while(i<=10){
        sum = sum + i;
        i++;
    }
    printf("sum of first 10 natural numbers will be: %d",sum);
    return 0; // donot forget this
}