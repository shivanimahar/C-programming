/*
4. Write a C program with a void function 'printPattern(int n)' that prints
   the following pattern for n=4:
   *
   * *
   * * *
   * * * *
*/

#include <stdio.h>

void printPattern(int);

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {        // rows
        for (int j = 1; j <= i; j++) {    // columns (j <= i, not j <= n)
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    printPattern(n);  // call the function
    
    return 0;
}