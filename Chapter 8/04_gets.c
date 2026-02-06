#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // The entered string is stored in st!

    printf("%s", st);
    // puts(st); // prints and take the cursor to the next line
    printf("hey");

    return 0;
}