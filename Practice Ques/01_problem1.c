/*
Q1. Write a C program to declare variables of all basic data types (int,
     float, double, char) and print their values and sizes using sizeof().

     Expected Output:
     int: 4 bytes
     float: 4 bytes
     double: 8 bytes
     char: 1 byte
*/

#include<stdio.h>
int main(){
    int a=278;
    float b=4.0;
    double d= 6.789324;
    char c='s';
    printf("int    : value = %d,  size = %lu bytes\n", a, sizeof(a));
    printf("float  : value = %f,  size = %lu bytes\n", b, sizeof(b));
    printf("double : value = %lf, size = %lu bytes\n", d, sizeof(d));
    printf("char   : value = %c,  size = %lu bytes\n", c, sizeof(c));

    return 0;
}