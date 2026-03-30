/*
Write a program to insert an element at a given position in an unsorted array. Handle edge cases:
position < 0 and position > current size.
Hint: Shift elements from the end to create a gap at the given position. 
*/ 

#include <stdio.h>

int main() {
    int n, pos, element;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[100];  // extra space for insertion 

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Edge cases
    if(pos < 0 || pos > n) {
        printf("Invalid position!");
        return 0;
    }

    // Shift elements right 
    for(int i = n; i > pos; i--) { 
        arr[i] = arr[i - 1]; //used to shift elements 
    } //[1,3,2,5,4] , [1,7,3,2,5,4] 


    // Insert element
    arr[pos] = element; // inserting element in the given position
    n++; // will inc the size of the array

    // Print updated array
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}