/*
CQ23. Write a C program using goto to simulate a simple loop that prints
      numbers from 1 to 5.

      (Demonstrate goto with a label.)
*/
#include <stdio.h>

int main() {
    int i = 1;

start:                  // Label
    if(i <= 5) {
        printf("%d ", i);
        i++;
        goto start;     // Jump back to label
    }

    return 0;
}