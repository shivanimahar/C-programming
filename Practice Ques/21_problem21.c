/*
CQ24. Write a C program to count the number of set bits (1s) in the binary,
      representation of an integer.
*/
#include <stdio.h>

int countSetBits(int n) { 
    int count = 0;
    while (n > 0) {
        count += n & 1;
       //Check if last bit is 1 
        n >>= 1;         // Right shift by 1
    }
    // 1101 hn 1
    // 110 ni 0
    // 11 hn 1
    // 1 hn 1 

    return count;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Number of set bits in %d = %d\n", num, countSetBits(num));
    return 0;
}



