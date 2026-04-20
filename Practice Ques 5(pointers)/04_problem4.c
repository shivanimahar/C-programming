/*[Pointer Expressions]
Given: int a[]={10,20,30,40,50}; int *p=a;
Predict the output of each expression and explain why:
(a) printf("%d", *(p+2));
(b) printf("%d", *p++);
(c) printf("%d", (*p)++);
(d) printf("%d", *++p);
(e) printf("%u %u", p, p+1);
■ Hint: Operator precedence: * and ++ are right-to-left. Track p's position after each operation.
■ Tests: pointer expression evaluation, pre/post increment with pointers.*/
#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;

    // (a)
    printf("(a) *(p+2) = %d\n", *(p+2));

    // reset pointer
    p = a;

    // (b)
    printf("(b) *p++ = %d\n", *p++);
    printf("    After (b), p points to value = %d\n", *p);

    // (c)
    printf("(c) (*p)++ = %d\n", (*p)++);
    printf("    After (c), updated value at p = %d\n", *p);

    // (d)
    printf("(d) *++p = %d\n", *++p);
    printf("    After (d), p points to value = %d\n", *p);

    // (e)
    printf("(e) p = %p, p+1 = %p\n", (void*)p, (void*)(p+1));

    return 0;
}