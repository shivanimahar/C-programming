/*
CQ2. Write a C program to find the greatest among three numbers using
     nested if-else statements.

     Input:  a=10, b=25, c=15
     Output: Greatest number is 25
*/
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greater", a);
        }
        else
        {
            printf("%d is greater", c);
        }
    }
        else
        {
            if (b > c)
            {
                printf("%d is greater", b);
            }
            else
            {
                printf("%d is greater", c);
            }
        }
    

    return 0;
}
