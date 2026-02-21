/*
CQ11. Write a C program to demonstrate the difference between pre-increment
      (++i) and post-increment (i++) operators with proper output.
*/

#include<stdio.h>
int main(){
    int i = 2;
    int j = 5;
    printf("pre-increment: %d\n",++i);
    printf("%d\n",i);
    printf("post-increment: %d\n",j++);
    printf("%d\n",j);

    return 0;
}