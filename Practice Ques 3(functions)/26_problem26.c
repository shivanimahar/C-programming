/*
25. Write a C program with three functions: funcA(), funcB(), funcC().
    Declare a global variable and modify it in each function. Print its
    value after each modification to demonstrate global scope.
*/
#include <stdio.h>

// Global variable
int num = 0;

void funcA() {
    num = num + 5;
    printf("After funcA: %d\n", num);
}

void funcB() {
    num = num + 10;
    printf("After funcB: %d\n", num);
}

void funcC() {
    num = num + 15;
    printf("After funcC: %d\n", num);
}

int main() {

    printf("Initial value: %d\n", num);

    funcA();
    funcB();
    funcC(); 

    return 0;
}