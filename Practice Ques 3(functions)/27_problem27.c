/*
26. Write a C program to demonstrate the 'static' storage class by writing
    a function 'void countCalls()' that tracks and prints how many times
    it has been called using a static local variable. Call it 5 times.

    Expected Output:
    Function called 1 time(s)
    Function called 2 time(s)
    ...
    Function called 5 time(s)
*/
#include <stdio.h>

void countCalls() {
    static int count = 0;   // static local variable
    count++;
    printf("Function called %d time(s)\n", count);
}

int main() {

    countCalls();
    countCalls();
    countCalls();
    countCalls();
    countCalls();

    return 0;
}

