#include <stdio.h>

int main(){
    int marks[5];  // creates an array which can store 5 integers

    printf("Enter marks of 5 students\n");
 
    // Stores each entered number in the array
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    // &marks[i] gives the memory address of each element
      for (int i = 0; i < 5; i++)
    {
        printf("The address of marks at index %d is %u\n", i, &marks[i]);
    }
    
 
    return 0;
}