/*
CQ14. Write a C program to check whether a year is a leap year using logical
      operators.

      Condition: (year%4==0 && year%100!=0) || (year%400==0)
*/
#include<stdio.h>
int main(){
    int y;
    printf("year: ");
    scanf("%d",&y);
    if((y%4==0 && y%100!=0) || (y%400==0)){
        printf("%d is leap year",y);
    }
    else{
        printf("not a leap year");
    }
    return 0;
}

