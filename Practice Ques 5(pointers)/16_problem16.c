/* [realloc]
Write a C program that simulates a dynamic array: (a) start with capacity 2 using malloc, (b)
whenever the array is full, use realloc to double the capacity, (c) insert at least 7 integers one by one,
printing the array and capacity after each resize. Handle the case where realloc returns NULL.
■ Hint: Keep a count and capacity variable. If count==capacity, realloc(ptr, new_cap*sizeof(int)).
■ Tests: realloc, dynamic resizing strategy, NULL safety.
*/
// re allocates the memory, 2 se 7 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 2;
    int count = 0;

    // (a) initial allocation
    int *arr = (int*) malloc(capacity * sizeof(int));

    if (arr == NULL) {
        printf("Initial memory allocation failed!\n");
        return 1;
    }

    // Insert at least 7 elements
    for (int i = 1; i <= 7; i++) {

        // (b) if full → resize (double capacity)
        if (count == capacity) {
            int new_capacity = capacity * 2;

            int *temp = (int*) realloc(arr, new_capacity * sizeof(int));

            // NULL check for realloc
            if (temp == NULL) {
                printf("Reallocation failed!\n");
                free(arr); // free old memory
                return 1;
            }

            arr = temp;
            capacity = new_capacity;

            printf("\nResized! New capacity = %d\n", capacity);
        }

        // Insert element
        arr[count] = i * 10;  // example values
        count++;

        // Print array
        printf("Array: ");
        for (int j = 0; j < count; j++) {
            printf("%d ", arr[j]);
        }
        printf(" | Capacity: %d\n", capacity);
    }

    // Free memory
    free(arr);

    return 0;
}
