#include <stdio.h>

int main(){
    // char st[] = {'a', 'b', 'c', '\0'}; // last one is null character which is used to terminate the string
    char st[] = "abc"; // Same as doing char st[] = {'a', 'b', 'c', '\0'};
    // printf("First character is %c\n", st[0]);
    for (int i = 0; i < 3; i++)
    {
    printf("Character is %c \n", st[i]);  
    }
    
    
    return 0;
}