/*
CQ15. Write a C program to find the largest of three numbers using relational
      and logical operators only (no if-else or ternary).
*/
/*
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("a is greater: %d\n", a>b && a>c);
    printf("b is greater: %d\n", b>a && b>c);
    printf("c is greater: %d\n", c>b && c>a);

    return 0;
}
*/

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largestA = (a >= b && a >= c) * a;
    int largestB = (b > a && b >= c) * b;
    int largestC = (c > a && c > b) * c;

    int largest = largestA + largestB + largestC;

    printf("Largest = %d", largest);

    return 0;
}

