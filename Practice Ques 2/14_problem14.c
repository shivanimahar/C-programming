/*
CQ16. Write a C program using a for loop to find the sum of digits of
      a number.

      Input:  4567
      Output: Sum of digits = 22
*/
#include<stdio.h>
int main(){
    int n,sum=0,d;
    printf("n: ");
    scanf("%d",&n);
    for(int i=0;n!=0;i++){ //123 //loop tb tk chlegi jb tk n zero na ho jaye
        d=n%10; //3
        sum = sum + d; //0+3
       n =n/10; //12

    }
    printf("Sum: %d",sum);

    return 0;
}