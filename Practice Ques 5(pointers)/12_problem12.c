/*Q12. [Array Rotation via Pointer]
Write a C function void rotateLeft(int *arr, int n, int k) that left-rotates the array by k positions using
pointer arithmetic. Demonstrate with an array of 7 elements rotated by 3 positions.
■ Hint: Reverse first k elements, reverse rest, reverse entire array — all via pointer ops.
■ Tests: in-place manipulation, pointer arithmetic in function.*/
#include <stdio.h>

// Function to reverse a part of array using pointers
void reverse(int *start, int *end) {
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to left rotate array by k positions
void rotateLeft(int *arr, int n, int k) {
    k = k % n;  // Handle k > n

    // Step 1: Reverse first k elements
    reverse(arr, arr + k - 1);

    // Step 2: Reverse remaining elements
    reverse(arr + k, arr + n - 1);

    // Step 3: Reverse whole array
    reverse(arr, arr + n - 1);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rotateLeft(arr, n, k);

    printf("\nArray after left rotation by %d: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    


    return 0;
}


