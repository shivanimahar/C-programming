/*
Given an array, delete the element at position k and then insert a new element at position m (both
given by user). Show the array after each operation.
Hint: Perform delete first (shift left from k), then insert (shift right from m)
*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter position to delete: ");
    scanf("%d", &k);

    // DELETE (shift left)
    for(i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int m, x;
    printf("\nEnter position to insert: ");
    scanf("%d", &m);

    printf("Enter value to insert: ");
    scanf("%d", &x);

    // INSERT (shift right)
    for(i = n; i > m; i--) {
        arr[i] = arr[i - 1];
    }

    arr[m] = x;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
