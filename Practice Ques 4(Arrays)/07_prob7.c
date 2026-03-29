/*
Given an unsorted integer array, remove all duplicate elements and print the resulting array
maintaining original order.
Hint: For each element, check if it has appeared before using a nested loop
*/
#include <stdio.h>

int main() {
    int n;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output result
    printf("Array after removing duplicates:\n");

    for(int i = 0; i < n; i++) { // this loop will pick each element from the array indexwise
        int isDuplicate = 0;

        // Check if element appeared before
        for(int j = 0; j < i; j++) { // this loop is used to check if the element is repeated or not, if repeated then break
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not duplicate, print it
        if(isDuplicate == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}