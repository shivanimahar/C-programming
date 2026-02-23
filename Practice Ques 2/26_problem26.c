/*

CQ28. Write a C program to read a string using gets() (or fgets()) and
      display it using puts(). Show that puts() automatically adds a newline.
*/
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // Read string with spaces

    printf("\nUsing puts():\n"); 
    puts(str);   // Automatically adds newline

    printf("Using printf(): ");
    printf("%s", str);   // No automatic newline

    return 0;
}