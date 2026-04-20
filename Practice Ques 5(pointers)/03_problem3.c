/*[Void (Generic) Pointer]
Write a C function void printValue(void *ptr, char type) that accepts a void pointer and a character ('i'
for int, 'f' for float, 'c' for char) and prints the value stored at that address. Call it from main() with all
three types.
■ Hint: Cast void* to the appropriate type before dereferencing.
■ Tests: void pointer, casting, generic programming.*/
#include <stdio.h>
//void* → generic pointer (kisi bhi type ka address store kar sakta hai)

void printValue(void *ptr, char type) {
    if(type == 'i') {
        printf("Integer: %d\n", *(int*)ptr); //casting, i.e. changing type to integer
    }
    else if(type == 'f') { 
        printf("Float: %.2f\n", *(float*)ptr);
    }
    else if(type == 'c') {
        printf("Character: %c\n", *(char*)ptr);
    }
    else {
        printf("Invalid type\n");
    }
}

int main() {
    //we donot use * in the main function
    int a = 10;
    float b = 5.5;
    char c = 'A';

    printValue(&a, 'i');
    printValue(&b, 'f');
    printValue(&c, 'c');

    return 0;
}