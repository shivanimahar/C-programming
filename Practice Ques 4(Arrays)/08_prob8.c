/*
Rotate an array of n elements to the left by k positions. Implement the reversal algorithm (reverse
first k, reverse rest, reverse whole).
Hint: Three calls to a reverse() helper function
*/
#include <stdio.h>

// helper function to reverse array
void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--; // start and end are index of starting and ending
    }
}

int main() {
    int n, k;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // handle large k
    k = k % n;

    // reversal algorithm
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);

    printf("Array after left rotation:\n"); // will just print the heading
    for(int i = 0; i < n; i++) { // will print the while array after reverse
        printf("%d ", arr[i]);
    }

    return 0;
}