/*
CQ19. Write a C program using a do-while loop to keep accepting numbers
      from the user until 0 is entered, and print the sum of all numbers.
*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        sum = sum + num;  // 0 enter kiya toh bhi sum mein add hoga (0 hai toh koi fark nahi)

    } while(num != 0);  // 0 aaya toh band

    printf("Sum = %d", sum);

    return 0;
}