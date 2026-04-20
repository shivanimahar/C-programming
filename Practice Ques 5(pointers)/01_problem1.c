/*
Q1.Write a C program that declares an integer array of size 5. Using only pointer arithmetic (no array
indexing [ ]), print the elements in reverse order. Also print the address difference between
consecutive elements.
■ Hint: Use *(ptr+i) style. Address difference = sizeof(int).
■ Tests: pointer arithmetic, dereferencing, address computation.
*/
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Elements in reverse order:\n");
    for(int i = 4; i >= 0; i--) {
        printf("%d ", *(ptr + i)); //Pointer ek address store karta hai.
        //Pointer arithmetic ka matlab hai us address ko aage–peeche move karna
    }

    printf("\n\nAddress difference between consecutive elements:\n");
    for(int i = 0; i < 4; i++) {
        printf("Between element %d and %d: %ld bytes\n",i, i+1, (char*)(ptr + i + 1) - (char*)(ptr + i));
                //int* → result in number of ints, not bytes
               //char* gives subtraction in bytes
    }

    return 0;
}