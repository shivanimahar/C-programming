/*. [Pointer Comparison]
Write a C program that takes an integer array and uses two pointers — one starting from the
beginning (left) and one from the end (right) — moving inward to check whether the array is a
palindrome. Use only pointer operations, no array indexing.
■ Hint: Compare *left and *right; move left++, right-- until left >= right.
■ Tests: pointer traversal, comparison operators on pointers.
*/
#include <stdio.h>

int isPalindrome(int *arr, int n) {
    int *left = arr;            // start pointer
    int *right = arr + n - 1;   // end pointer , right = &arr[n-1]

    while (left < right) {
        if (*left != *right) {
            return 0;   // not palindrome
        }
        left++;   // move forward
        right--;  // move backward
    }
    return 1;   // palindrome
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]); //“Total memory ko ek element ki memory se divide karo → number of elements in an array”

    if (isPalindrome(arr, n))
        printf("Array is a Palindrome\n");
    else
        printf("Array is NOT a Palindrome\n");

    return 0;
}