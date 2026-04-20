/* [Pass by Pointer]
Write a C function void swap(int *a, int *b) to swap two integers without using a third variable (use
XOR or arithmetic). Call it from main and verify. Also write a version that incorrectly swaps (pass by
value) and explain why it fails.
■ Hint: XOR swap: a^=b; b^=a; a^=b;
■ Tests: pass by pointer vs pass by value, side effects.*/
#include <stdio.h>

// swap using XOR and pointers
void swap(int *a, int *b) {
    if (a == b) return;   // safety: same address case

    *a = *a ^ *b; 
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);   // passing addresses

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}