/*
CQ12. Write a C program using a for loop to print the multiplication table
      of a number entered by the user.

      Input:  5
      Output: 5x1=5, 5x2=10, ... 5x10=50
*/
#include<stdio.h>
int main(){
    int n;
    printf("n: ");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        int table = n * i;
        printf("%d X %d = %d\n",n,i,table);
    }
    return 0;
}