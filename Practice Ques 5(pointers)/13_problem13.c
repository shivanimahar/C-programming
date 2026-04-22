/*Q13. [Pointer Arithmetic – Byte-level]
Write a C program that: (a) declares an int variable x = 0x12345678, (b) creates a char pointer
pointing to x, (c) prints each byte of x individually using the char pointer, (d) determines if the system
is little-endian or big-endian from the output.
■ Hint: char *p = (char*)&x; then p[0], p[1], p[2], p[3].
■ Tests: byte-level pointer access, type casting, endianness.*/

#include <stdio.h>

int main() {
    int x = 0x12345678;   // Step (a)

    char *p = (char*)&x;  // Step (b)

    printf("Bytes of x:\n");
    // Step (c): Print each byte
    for (int i = 0; i < sizeof(int); i++) { 
                printf("Byte %d: 0x%02X\n", i, (unsigned char)p[i]);
    }

    // Step (d): Check endianness
    if (p[0] == 0x78) {
        printf("\nSystem is Little Endian\n");
    } else if (p[0] == 0x12) {
        printf("\nSystem is Big Endian\n");
    } else {
        printf("\nUnknown Endianness\n");
    }
    
}