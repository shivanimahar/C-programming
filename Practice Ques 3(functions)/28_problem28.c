/*
27. Write a C program to show the difference between a 'static' local variable
    and a normal (auto) local variable in a function. Call the function 3 times
    and observe the difference in behavior.
*/
#include <stdio.h>

void demo() {
    int a = 0;          // normal (auto) local variable, will get reset to 0 evertime
    static int b = 0;   // static local variable, will count the no. of times it has been called.

    a++;
    b++;

    printf("Auto variable a = %d, Static variable b = %d\n", a, b);
}

int main() {

    demo();
    demo();
    demo();

    return 0;
}