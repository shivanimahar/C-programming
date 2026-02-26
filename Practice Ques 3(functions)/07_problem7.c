/*
7. Write a C program with a function 'void swap(int *a, int *b)' that swaps
   two integers using call by reference. Verify the swap in main().

   Expected Output:
   Before swap: a=10, b=20
   After swap: a=20, b=10
*/
#include<stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    printf("enter a and b: ");
    scanf("%d %d",&a , &b);
    swap(&a, &b);
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    return 0;

}




 