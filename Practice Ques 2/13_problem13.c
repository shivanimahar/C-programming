/*
CQ15. Write a C program using nested for loops to print the following
      pattern:
      *
      * *
      * * *
      * * * *
      * * * * *
*/
#include<stdio.h>
int main(){
    int n;
    printf("n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}