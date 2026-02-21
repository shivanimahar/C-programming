/*
CQ30. Write a C program that accepts a number from the user and:
      - Checks if it is positive/negative (relational operator)
      - Checks if it is even/odd (bitwise AND)
      - Prints its square (arithmetic)
      - Prints result of number left-shifted by 1 (bitwise shift)
      All in a single program combining operators from the entire unit.
*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // 1. Positive or Negative (relational operator)
    if (n > 0)
        printf("%d is Positive\n", n);
    else if (n < 0)
        printf("%d is Negative\n", n);
    else
        printf("Number is Zero\n");

    // 2. Even or Odd (bitwise AND)
    if (n & 1)
        printf("%d is Odd\n", n);
    else
        printf("%d is Even\n", n);

    // 3. Square (arithmetic)
    printf("Square of %d = %d\n", n, n * n);

    // 4. Left shift by 1 (bitwise shift = multiply by 2)
    printf("%d left shifted by 1 = %d\n", n, n << 1);

    return 0;
}