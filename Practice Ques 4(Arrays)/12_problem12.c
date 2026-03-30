/*
Delete all occurrences of a given value x from an array in a single pass. Print the modified array
and the count of deletions.
Hint: Use a write-index: only copy elements != x
*/
#include <stdio.h>

int main() {
    int n, x;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &x);

    int k = 0; // write index , array
    
    

    // single pass 
    for(int i = 0; i < n; i++) {
        if(arr[i] != x) { //[2,2,3,4], x = 2 
            arr[k] = arr[i];
            k++;
        }
    }

    int deleted = n - k; //2,2

    // print result
    printf("Modified array:\n");
    for(int i = 0; i < k; i++) {
        printf("%d ", arr[i]); //[3,4]
    }

    printf("\nDeleted elements count: %d", deleted); //[2]

    return 0;
}