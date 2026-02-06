#include <stdio.h>

int main(){
    char st[4]; //Size is 4 → it can store 3 characters + 1 null character (\0).
    scanf("%s", st); //  only st in place of &st as The name st itself represents the address of the first character. So st already works like a pointer.
    // scanf will take string input from the user
    printf("%s", st); // will print string stored in st

    return 0;
}