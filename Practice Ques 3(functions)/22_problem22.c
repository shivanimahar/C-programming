/*
21. Write a recursive C function to reverse a string. Pass the string as a
    character array and print the reversed string.

    Input:  "hello"
    Output: "olleh"
*/
#include <stdio.h>

void reverse(char str[], int index) { 
    if (str[index] == '\0')   // Base case 
        return; //stop
//last element in the array is null character(\0). 
    reverse(str, index + 1);  // Recursive call 

    printf("%c", str[index]); // Print after recursion
}


int main() {
    char str[] = "hello"; 
    reverse(str, 0); //0 str 
    return 0;

}
