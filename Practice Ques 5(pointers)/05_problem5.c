/*[Pointer to Pointer]
Write a C program using a pointer to pointer (int **pp) to: (a) dynamically allocate an integer, (b)
assign value 42 through **pp, (c) print the value using *pp and **pp, (d) print addresses stored in pp
and *pp. Draw the memory diagram in comments.
■ Hint: pp stores address of p; *pp is p; **pp is the int value.
■ Tests: double pointer, dynamic allocation via pointer-to-pointer.*/
#include <stdio.h>
#include <stdlib.h>

int main() { 
    int *p;      // pointer to int
    int **pp;    // pointer to pointer, pointer pointing to another pointer explain

    // (a) dynamically allocate an integer using pointer-to-pointer
    pp = &p;                 
    *pp = (int*)malloc(sizeof(int)); //default value for malloc is garbage, default value for calloc is 0.

    // (b) assign value 42 through **pp
    **pp = 42;

    // (c) print value using *pp and **pp
    printf("Value using *pp (address): %p\n", (void*)*pp);// because void is generic pointer, allows all data type
    printf("Value using **pp (actual value): %d\n", **pp);

    // (d) print addresses stored in pp and *pp
    printf("Address stored in pp (address of p): %p\n", (void*)pp);
    printf("Address stored in *pp (address of allocated int): %p\n", (void*)*pp);

    // free memory
    free(*pp); 

    return 0;
}
