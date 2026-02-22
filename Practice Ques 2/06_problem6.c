/*
CQ7. Write a C program using switch to print the grade based on marks:
     90-100: A, 75-89: B, 60-74: C, 40-59: D, Below 40: Fail
*/

#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    switch(marks / 10) {
        case 10:
        case 9:
            printf("Grade: A");
            break;

        case 8:
        case 7:
            printf("Grade: B");
            break;

        case 6:
            printf("Grade: C");
            break;

        case 5:
        case 4:
            printf("Grade: D");
            break;

        default:
            printf("Grade: Fail");
    }

    return 0;
    
}
