/*
CQ25. Write a C program to demonstrate the use of type modifiers:
      short int, long int, unsigned int.
      Print the range and size of each using sizeof().
*/
#include <stdio.h>
#include <limits.h>

int main() {

    short int s;
    long int l;
    unsigned int u;

    printf("SHORT INT:\n");
    printf("Size = %lu bytes\n", sizeof(s));
    printf("Range = %d to %d\n\n", SHRT_MIN, SHRT_MAX);

    printf("LONG INT:\n");
    printf("Size = %lu bytes\n", sizeof(l));
    printf("Range = %ld to %ld\n\n", LONG_MIN, LONG_MAX);

    printf("UNSIGNED INT:\n");
    printf("Size = %lu bytes\n", sizeof(u));
    printf("Range = 0 to %u\n", UINT_MAX);

    return 0;
}