/*
9. Write a C program with
 a function 'void getMinMax(int arr[], int n,
int *min, int *max)' that finds both minimum 
and maximum values of an
array using call by reference and 
returns them through pointer parametersss.
*/
#include <stdio.h>

void getMinMax(int arr[], int n, int *min, int *max) { 
    *min = arr[0]; 
    *max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < *min) {
            *min = arr[i];
        }
        if(arr[i] > *max) {
            *max = arr[i]; 
        }
    }
}

int main() {
    int arr[] = {12, 45, 7, 89, 23};
    int n = 5;
    int min, max;

    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    getMinMax(arr, n, &min, &max);

    printf("\nMinimum value: %d", min);
    printf("\nMaximum value: %d", max);

    return 0;
}




