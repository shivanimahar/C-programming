/*[Dynamic 1D String Array]
Write a C program that dynamically allocates memory for n strings (n entered by user), reads each
string using scanf, sorts them lexicographically using strcmp and bubble sort (swapping only the
pointers, not the strings themselves), and prints the sorted list. Free all memory at the end.
■ Hint: Use char **arr = malloc(n * sizeof(char*)). Then arr[i] = malloc(50).
■ Tests: array of pointers, dynamic strings, pointer swapping.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;

    // Input size
    printf("Enter number of strings: ");
    scanf("%d", &n);

    // Allocate array of pointers
    char **arr = (char**) malloc(n * sizeof(char*));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Allocate memory for each string
    for (int i = 0; i < n; i++) {
        arr[i] = (char*) malloc(50 * sizeof(char));

        if (arr[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
    }

    // Input strings
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Bubble sort (lexicographical)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap pointers (NOT strings)
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted strings
    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        free(arr[i]);   // free each string
    }
    free(arr);         // free array of pointers

    return 0;
}