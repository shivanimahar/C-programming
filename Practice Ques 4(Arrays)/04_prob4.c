/*
Write a program to find the sum, average, maximum, and minimum of a user-input integer array
of size n (n <= 20). Display all four results.
Hint: Traverse once tracking max/min simultaneously.
*/
#include <stdio.h>

int main() {
    int arr[20], n;
    int sum = 0, max, min;
    float avg; 

    // Input size
    printf("Enter n (<=20): "); 
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n); 
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // giving input elements to each indexing.
    } 

    // Initialize
    max = min = arr[0]; //just initializing it 

    // [3,4,2,5,1] , max = min = 3
    // Single traversal
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        
        if(arr[i] > max) // max = 1,2,3,4,5.
            max = arr[i]; //5 

        if(arr[i] < min) 
            min = arr[i];
    }
    // Average
    avg = (float)sum / n;

    // Output
    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", avg);
    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);

    return 0;
}
