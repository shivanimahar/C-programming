/*
23. Write a C program to demonstrate local and global scope. Declare a global
    variable 'count' initialized to 0. Write a function 'increment()' that
    increases it by 1. Call increment() 5 times and print count from main().

    Expected Output: Count = 5
*/
#include <stdio.h>

// Global variable
int count = 0;

// Function to increment count
void increment() {
    count = count + 1;   // accessing global variable
}

int main() {
    int i;   // local variable

    for(i = 0; i < 5; i++) {
        increment();   // function call
    }

    printf("Count = %d", count);

    return 0;
}