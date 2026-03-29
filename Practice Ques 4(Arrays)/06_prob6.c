/*
Write a program to count the frequency of each distinct element in an array of n integers (values
between 1 and 100). Print element-frequency pairs.
Hint: Use a frequency array of size 101 initialized to 0
*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n]; 
    int freq[101] = {0}; // arr[1,2,3,2,1]
     // array named freq has 101 elements intialized with 0
      // frequency array (0 to 100)

    // Input elements
    printf("Enter %d elements (1 to 100):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); //giving address of the array to the input elements
        freq[arr[i]]++; // increase count 
    }//[1,2,3,44,3,2,], 

    // Print frequencies
    printf("\nElement - Frequency:\n");
    for(i = 1; i <= 100; i++) {
        if(freq[i] > 0) {
            printf("%d -> %d\n", i, freq[i]);
        }
    }

    return 0;
}