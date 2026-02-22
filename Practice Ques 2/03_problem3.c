/*
CQ3. Write a C program to check whether a student has passed or failed.
     If marks >= 40 in all 3 subjects, print "Pass", else print "Fail".
*/
#include<stdio.h>

int main(){
    int maths,phys,chem;
    printf("enter marks of 3 subjects: ");
    scanf("%d %d %d",&maths,&phys,&chem);
    if(maths>=40 && phys>=40 && chem>=40){
        printf("pass");
    }
    else{
        printf("fail");
    }
    return 0;
}