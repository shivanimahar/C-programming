/*
Given two sorted arrays of sizes m and n, merge them into a single sorted array of size m+n
without using any library sort function.
Hint: Use three indices: i for arr1, j for arr2, k for result
*/
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int arr1[m];
    printf("Enter sorted elements of first array:\n");
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int arr2[n];
    printf("Enter sorted elements of second array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int result[m + n];

    int i = 0, j = 0, k = 0;

    // Merge process
    while(i < m && j < n) {
        if(arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Remaining elements of arr1
    while(i < m) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    // Remaining elements of arr2
    while(j < n) {
        result[k] = arr2[j];
        j++;
        k++;
    }

    // Print result
    printf("Merged array:\n");
    for(int i = 0; i < m + n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}