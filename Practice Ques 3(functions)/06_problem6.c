/*
6. Write a C program to demonstrate the difference between call by value and
   call by reference using a function that attempts to double a number.
   Show that call by value does NOT change the original while call by reference
   DOES change the original.
*/
 
#include <stdio.h>

// Call by Value
void doubleValue(int num) {
    num = num * 2;
    printf("Inside doubleValue (Call by Value): %d\n", num);
}

// Call by Reference (using pointer)
void doubleReference(int *num) {
    *num = (*num) * 2;
    printf("Inside doubleReference (Call by Reference): %d\n", *num);
}

int main() {
    int number = 10;

    printf("Original number: %d\n", number);

    // Call by Value
    doubleValue(number);
    printf("After doubleValue (in main): %d\n", number);

    // Call by Reference
    doubleReference(&number);
    printf("After doubleReference (in main): %d\n", number);

    return 0;
}
