/*. [realloc with Preservation]
Write a C function int* appendElement(int *arr, int *size, int value) that appends a new element to a
dynamically allocated array using realloc, increments *size, and returns the (possibly new) pointer.
Call it 5 times from main adding values 11–15 to an initially empty array (arr=NULL, size=0). Print the
array after each append.
■ Hint: realloc(NULL, size) behaves like malloc. Return the new pointer from the function.
■ Tests: realloc with growing array, NULL start, size tracking.*/