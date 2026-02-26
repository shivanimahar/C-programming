/*
3. Write a C program with two functions:
   - int square(int n)  → returns square of n
   - int cube(int n)    → returns cube of n
   Call both from main() and print results for n = 4.

   Expected Output:
   Square of 4 = 16
   Cube of 4 = 64
*/
#include<stdio.h>

int square(int);
int cube(int);

int square(int n){
    return n*n;
}

int cube(int n){
    return n * n * n;
}

int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    int sq = square(n);
    int cu = cube(n);
    printf("%d\n",sq);
    printf("%d\n",cu);
    return 0;
}