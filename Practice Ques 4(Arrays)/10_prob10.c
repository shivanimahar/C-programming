/*
Find the second largest and second smallest element in an array in a single traversal (no sorting
allowed).
Hint: Maintain four variables: max1, max2, min1, min2
*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for(int i = 0; i < n; i++) {

        // For maximums
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }

        // For minimums
        if(arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    printf("Second smallest: %d\n", min2);
    printf("Second largest: %d\n", max2);

    return 0;
}
