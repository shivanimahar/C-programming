/*
CQ24. Write a C program to demonstrate implicit and explicit type
      conversion. Show difference between:
      i)  int / int  (integer division)
      ii) (float) int / int  (explicit cast)
      iii) float + int  (implicit promotion)
*/
#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float result;

    // i) int / int  (Integer Division)
    result = a / b;
    printf("i) int / int = %f\n", result);

    // ii) (float) int / int  (Explicit Casting)
    result = (float)a / b; //explicit means manually
    printf("ii) (float) int / int = %f\n", result);

    // iii) float + int  (Implicit Promotion) // automatically done by the compiler
    float x = 5.5;
    int y = 2;
    float sum = x + y; 
    printf("iii) float + int = %f\n", sum);

    return 0;
}