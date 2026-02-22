/*
CQ5. Write a C program using switch to build a simple calculator that
     performs +, -, *, / based on the operator entered by the user.

     Input:  10 + 5
     Output: Result = 15
*/
#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter expression (e.g. 10 + 5): ");
    scanf("%f %c %f", &a, &op, &b);  // reads: number, operator, number

    switch(op)
    {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Error: Division by zero!");
            break;

        default:
            printf("Invalid operator!");
    }

    return 0;
}



