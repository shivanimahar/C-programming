/* [Memory Leak Detection]
The following code has three memory-related bugs. Find and fix all of them, explaining each issue:
int *p = (int*)malloc(5*sizeof(int));
p = (int*)malloc(10*sizeof(int));
free(p);
free(p);
int *q = (int*)malloc(sizeof(int));
*q = 100;
free(q);
printf("%d", *q);
■ Hint: Look for: memory leak (original p lost), double free, use-after-free.
■ Tests: memory leak, double free, dangling pointer after free.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(5 * sizeof(int));

    // Fix 1: free before reassigning
    free(p); 
    p = (int*)malloc(10 * sizeof(int));

    // Fix 2: avoid double free
    free(p); //sirf memory chodega
    p = NULL; //now it will leave the address 
    /*
    ✔️ It releases the memory
    ❌ But it does NOT change the pointer value
    p → still holds old address (but invalid now)
    This is called a dangling pointer
    p → points to nothing (safe state)
    */

    int *q = (int*)malloc(sizeof(int));
    *q = 100;

    // Fix 3: use before free
    printf("%d\n", *q);

    free(q);
    q = NULL;

    return 0;
}