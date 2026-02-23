/*

CQ27. Write a C program that reads a float and prints it in:
      i)  Default format
      ii) 2 decimal places
      iii) 8 width with 2 decimal places
      iv) Left-aligned with 8 width

*/
#include <stdio.h>

int main() {
    float num;

    printf("Enter a float number: ");
    scanf("%f", &num);

    // i) Default format
    printf("\ni) Default format: %f\n", num);

    // ii) 2 decimal places
    printf("ii) 2 decimal places: %.2f\n", num);

    // iii) Width 8 with 2 decimal places
    printf("iii) Width 8 with 2 decimal places: %8.2f\n", num); //point se pehle % ke baad width aati hai

    // iv) Left-aligned with width 8
    printf("iv) Left-aligned width 8: %-8.2f\n", num); // - ka mtlb left allignment

    return 0;
}