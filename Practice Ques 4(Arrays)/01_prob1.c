/*
Declare an integer array of size 10. Initialize it so that each element equals its index squared (0,
1, 4, 9, ..., 81). Print the array.
Hint: Use a loop: arr[i] = i*i
*/
#include <stdio.h>

int main() {
    int arr[10];

    // Initialize array: arr[i] = i*i
    for(int i = 0; i < 10; i++) {
        arr[i] = i * i;
    }

    // Print the array
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}
