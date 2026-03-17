/*
8. Write a C function 
'void updateArray(int arr[], int n)' 
that multiplies
each element of the array by 2. 
Print the array before and after the callll.

   Input:  {1, 2, 3, 4, 5}
   Output: {2, 4, 6, 8, 10}
*/
#include <stdio.h>

void updateArray(int arr[], int n) {
    for(int i = 0; i < n; i++){
        arr[i] = arr[i] * 2;// i for index, to pass the iteration to each element
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5; //size

    printf("Before update:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }

    updateArray(arr, n);

    printf("\nAfter update:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


