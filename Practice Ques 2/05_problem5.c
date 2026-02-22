/*
CQ6. Write a C program using switch to print the day name based on a
     day number (1=Monday ... 7=Sunday). Print "Invalid" for other input.
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter day number: ");
    scanf("%d",&n);
    
    switch(n){
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("Invalid! Enter 1-7");
    }

    return 0;
}
