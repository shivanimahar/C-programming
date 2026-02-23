/*
CQ29. Write a C program to read a character using getchar() and display
      it using putchar(). Also print its ASCII value.
*/
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    ch = getchar();   // Read single character

    printf("\nUsing putchar(): ");
    putchar(ch);      // Display character

    printf("\nASCII value of %c = %d\n", ch, ch);

    return 0;
}