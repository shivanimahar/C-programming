/*
CQ30. Write a complete C program that:
      1. Accepts 10 integers from the user using a for loop and scanf()
      2. Finds the maximum, minimum, and average of those 10 numbers
      3. Counts how many numbers are even and how many are odd
      4. Displays all results in a formatted table using printf()

      (This question combines loops, if-else, formatted I/O, and
       arithmetic — covers the entire Unit II.)
*/
#include <stdio.h>

int main() {
    int num, i;
    int max, min;
    int sum = 0;
    int even = 0, odd = 0;
    float average;

    printf("Enter 10 integers:\n");

    for(i = 1; i <= 10; i++) {
        scanf("%d", &num);

        if(i == 1) {
            max = min = num;   // Initialize on first input
        }

        if(num > max)
            max = num;

        if(num < min)
            min = num;

        if(num % 2 == 0)
            even++;
        else
            odd++;

        sum += num;
    }

    average = sum / 10.0;

    // Formatted Output Table
    printf("\n-------------------------------\n");
    printf("%-15s %10d\n", "Maximum", max);
    printf("%-15s %10d\n", "Minimum", min);
    printf("%-15s %10.2f\n", "Average", average);
    printf("%-15s %10d\n", "Even Count", even);
    printf("%-15s %10d\n", "Odd Count", odd);
    printf("-------------------------------\n");

    return 0;
}