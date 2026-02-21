/*
CQ13. Write a C program to check if a number is positive, negative, or zero
      using relational operators (without if-else, use printf with relational
      expressions).
*/
// relational operators are <,>,=.
#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);

    printf("Positive: %d\n",n>0);
    printf("Negative: %d\n",n<0);
    printf("Zero: %d",n==0);

    return 0;
}


