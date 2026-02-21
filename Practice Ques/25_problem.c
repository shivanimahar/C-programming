/*CQ28. Write a C program to demonstrate the use of const keyword. Attempt to
      modify a const variable and explain the error.
*/
#include <stdio.h>

int main() {

    const float PI = 3.14159;
    float radius = 5.0;
    float area;

    // Using const variable (allowed)
    area = PI * radius * radius;
    printf("Area = %.2f\n", area);

    // Trying to modify const variable (NOT allowed)
 //PI = 3.0;  // ❌ ERROR HERE

    return 0;
}