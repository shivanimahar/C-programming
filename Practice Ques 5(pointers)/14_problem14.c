/*Q14. [malloc & free]
Write a C program that: (a) takes n from the user at runtime, (b) dynamically allocates an integer
array of size n using malloc(), (c) reads n integers, (d) prints them in reverse, (e) frees the memory.
Add NULL check after malloc and comment on what happens if allocation fails.
■ Hint: malloc(n * sizeof(int)). Always check if ptr == NULL before use.
■ Tests: basic dynamic allocation, NULL check, free*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // (a) Take input
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // (b) Allocate memory
    int *arr = (int*) malloc(n * sizeof(int));

    // NULL check
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // stop program 
    }
    

    // (c) Read elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);  // pointer arithmetic
    }
    // pointer stores address, in pointeers we donot use &, instead we use arr + i 
    // (d) Print in reverse
    printf("Elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(arr + i)); //value
    }

/*
    arr + i → house address 🏠
    *(arr + i) → person inside the house 👤
*/

    // (e) Free memory
    free(arr); //to prevent memory leaks

    return 0;
}