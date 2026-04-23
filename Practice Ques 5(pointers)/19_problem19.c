/*[Struct with Dynamic Memory]
Define a struct Student { char *name; int roll; float marks; }. Write a program that: (a) dynamically
allocates an array of n Student structs, (b) reads data for each, (c) prints the student with highest
marks, (d) properly frees all memory including name strings.
■ Hint: Allocate the struct array first, then for each struct malloc the name. Free in reverse order.
■ Tests: dynamic struct array, nested allocation, proper free order.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char *name;
    int roll;
    float marks;
};

int main() {
    int n, i, maxIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // (a) Dynamically allocate array of structs
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // (b) Read data
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

        students[i].name = (char *)malloc(100 * sizeof(char)); // allocate memory for name

        if (students[i].name == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter roll: ");
        scanf("%d", &students[i].roll);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // (c) Find student with highest marks
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("Roll: %d\n", students[maxIndex].roll);
    printf("Marks: %.2f\n", students[maxIndex].marks);

    // (d) Free memory (reverse order)
    for (i = 0; i < n; i++) {
        free(students[i].name);  // free name first
    }

    free(students); // then free struct array

    return 0;
}
