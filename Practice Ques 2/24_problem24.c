/*
CQ26. Write a C program to read name, age, and CGPA of a student using
      scanf() and display a formatted table using printf() with proper
      field widths.

      Output:
      Name         Age    CGPA
      Rahul         20    8.75
*/
#include <stdio.h>

int main()
{
    char name[50];
    int age;
    float cgpa;

    // Input
    printf("Enter Name: ");
    scanf("%s", name); // single word name

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    // Output Table
    printf("\n%-12s %-6s %-6s\n", "Name", "Age", "CGPA"); //%s is used as we need only these strings not their values
    printf("%-12s %-6d %-6.2f\n", name, age, cgpa);
 /*
%-12s → Left aligned string (12 spaces)
%-6d → Integer with width 6
%-6.2f → Float with 2 decimal places, width 6
*/
    return 0;
}
