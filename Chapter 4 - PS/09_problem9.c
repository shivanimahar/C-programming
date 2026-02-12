// 9. Repeat 8 using while loop.

#include<stdio.h>

int main(){
    int i=1, fact = 1, num;
    printf("write num: ");
    scanf("%d",&num);
    while (i<=num){
        fact *= i;
        i++;
    }
    printf("fact will be: %d",fact);
    return 0;
}
