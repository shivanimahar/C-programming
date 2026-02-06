#include <stdio.h>

int main(){
    int marks[] = {12, 34, 53, 66};

    int* ptr = &marks[0]; // marks mai jitne bhi elements hai unka address ptr mai store ho jayega
    // int* ptr = marks; // Same as int* ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        // printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
 
    
    

    return 0;
}