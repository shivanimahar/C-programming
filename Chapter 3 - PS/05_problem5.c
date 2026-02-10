/* 
5. Write a program to determine whether a character entered by the user is
lowercase or not.
*/

#include<stdio.h>

int main(){
    char ch;
    printf("write the char: ");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z'){
        printf("lowercase");
    }
    else{
        printf("not a lowercase");
    }
    return 0;
}