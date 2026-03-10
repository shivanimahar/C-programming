/*
24. Write a C program to show variable shadowing: declare a global int x = 100
    and a local int x = 200 inside a function. Print both from the function
    (local) and from main() (global).
*/
#include <stdio.h>

// Global variable
int x = 100;

void show() {
    int x = 200;   // Local variable (shadows global x)

    printf("Local x inside function = %d\n", x);
}

int main() {
    show();

    printf("Global x inside main = %d\n", x);

    return 0;
}