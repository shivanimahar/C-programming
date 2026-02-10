/* 
2. Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include<stdio.h>

int main(){
    int m, p, c;
    printf("enter marks in maths: \n");
    scanf("%d",&m);
    printf("enter marks in phys: \n");
    scanf("%d",&p);
    printf("enter marks in chem: \n");
    scanf("%d",&c);

    printf("The marks are %d %d and %d\n", m, p, c);

    if (m<33 || p<33 || c<33){
        printf("You are failed\n");
    }
    else if((m+p+c)/3 < 40){
        printf("you are failed\n");
    }
    else{
        printf("you are passed\n");
    }
    return 0;

}
