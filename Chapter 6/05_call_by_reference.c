#include <stdio.h>


int sum(int* , int* );

//Sum should change the value of x
int sum(int* a, int* b){
    *a = 6;
    return *a + *b; // value at a + value at b
}

int main(){
    int x = 1, y=6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y)); // address of a and b will be copied to a and y
    printf("The value of x is %d", x);
    return 0;
}