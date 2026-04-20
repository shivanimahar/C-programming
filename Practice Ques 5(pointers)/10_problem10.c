/*[Pointer and Array Relationship]
Write a C program to demonstrate that array name is a constant pointer. Show: (a) arr == &arr;[0], (b)
*(arr+i) == arr[i], (c) arr+1 moves by sizeof(int) bytes, (d) why arr++ gives a compile error but ptr++
does not for a pointer pointing to the same array.
■ Hint: Assign arr to a pointer and then do ptr++. Try arr++ and note the error.
■ Tests: array-pointer equivalence, constant pointer nature.*/ 
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    // (a) arr == &arr[0]
    printf("(a) arr = %p, &arr[0] = %p\n", (void*)arr, (void*)&arr[0]);

    // (b) *(arr+i) == arr[i]
    printf("\n(b) Demonstrating *(arr+i) == arr[i]\n");
    for (int i = 0; i < 5; i++) {
        printf("*(arr+%d) = %d, arr[%d] = %d\n",
               i, *(arr + i), i, arr[i]);
    }

    // (c) arr+1 moves by sizeof(int)
    printf("\n(c) arr = %p, arr+1 = %p\n", (void*)arr, (void*)(arr+1));
    printf("Difference (bytes) = %ld\n",
           (char*)(arr+1) - (char*)arr);

    // (d) ptr++ works, arr++ does not
    printf("\n(d) Pointer increment demonstration:\n");
    printf("Before ptr++: %p\n", (void*)ptr);
    ptr++;
    printf("After ptr++ : %p\n", (void*)ptr);

    // Uncommenting the next line will cause compile-time error:
    // arr++;   // ❌ ERROR: array name is not modifiable

    return 0;
}