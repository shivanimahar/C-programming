/*Q11. [Function Returning Pointer]
Write a C function int* findMax(int *arr, int n) that returns a pointer to the maximum element in the
array. In main(), use the returned pointer to (a) print the max value, (b) modify it to 999 via the pointer,
and (c) print the modified array. Also explain the danger of returning a pointer to a local variable.
■ Hint: Return &arr;[maxIndex]. Never return &localVar.;
■ Tests: returning pointers, modifying via returned pointer, dangling pointer risk.
*/
#include <stdio.h>

// Function to return pointer to maximum element
int* findMax(int *arr, int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    return &arr[maxIndex];  // Return address of max element
}

int main() {
    int arr[] = {10, 45, 23, 89, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Get pointer to max element
    int *maxPtr = findMax(arr, n);

    // (a) Print max value
    printf("Maximum value: %d\n", *maxPtr);

    // (b) Modify max value to 999 using pointer
    *maxPtr = 999;

    // (c) Print modified array
    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
