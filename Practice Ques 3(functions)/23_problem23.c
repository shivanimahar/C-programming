/*
22. Write a recursive C function 'int binarySearch(int arr[], int low, int high,
    int key)' that searches for key in a sorted array. Return index if found,
    -1 otherwise.
*/
//used to search an element in the array

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {

    if (low > high)   // Base case: element not found
        return -1; 

    int mid = (low + high) / 2; // 0 + 5/ 2 = 2, indexes
    
    if (arr[mid] == key)      // Key found
        return mid;

    else if (key < arr[mid])  // Search left half
        return binarySearch(arr, low, mid - 1, key);

    else                      // Search right half
        return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = 6;
    int key = 6; 

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element found at index %d", result);
    else
        printf("Element not found");

    return 0;
}