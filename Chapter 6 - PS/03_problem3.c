// 3. Write a program to change the value of a variable to ten times of its current value.

#include <stdio.h>

void change_to_ten_times(int*);

void change_to_ten_times(int* a){
    return *a = *a * 10; 
}

int main(){
    int x = 45;
    printf("The value of x is %d\n", x);
    change_to_ten_times(&x);
    printf("The value of x is %d\n", x); // this gave 10 times

    return 0;
}