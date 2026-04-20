/*Q2. [Pointer Types – NULL & Wild]
Identify and fix the bugs in the following code snippet. Explain what type of pointer error each bug
represents (wild, dangling, or null dereference):
int *p; // wile kyuki initalize ni kia adress ni dia 
*p = 10;
int *q = NULL; //null hai tb value print krenge toh garbage value
printf("%d", *q);
int *r; 
{ int x = 5; r = &x; } //Pointer jo kisi deleted ya out-of-scope variable ko point kare
printf("%d", *r);
■ Hint: Three separate bugs — each is a classic pointer misuse.
■ Tests: wild pointer, null pointer dereference, dangling pointer.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;
    int *p = &x;

    int y = 20;
    int *q = &y;

    int z = 5;
    int *r = &z;

    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);

    return 0;
}