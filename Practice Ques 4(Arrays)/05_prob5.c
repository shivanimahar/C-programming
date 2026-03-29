/*
Given an integer array, reverse it in-place (without using a second array). Print both original and
reversed versions.
Hint: Use two pointers: left = 0, right = n-1, swap and move inward
*/
#include <stdio.h>

int main() {
    int n, i; 

    printf("Enter size of array (n <= 20): ");
    scanf("%d", &n);

    int arr[20];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print original array
    printf("\nOriginal array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Reverse array using two pointers
    int left = 0, right = n - 1; //[1,2,3,4,5] after swapping [5,4,3,2,1]
    while(left < right) { // left and right are pointing to index
        int temp = arr[left]; // swapping // temp = 1
        arr[left] = arr[right]; // left = 5
        arr[right] = temp; // right = 1 , then [5,2,3,4,1]

        left++; // now left index will be +1 i.e 1 after 0 index(0+1)
        right--; // 3 index(4-1)
    }

    // Print reversed array
    printf("\nReversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}