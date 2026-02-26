/*
5. Write a C program to define a function 'int maxOfThree(int a, int b, int c)'
   that returns the maximum of three integers. Test it with values (12, 45, 23).

   Expected Output: Maximum = 45
*/
#include<stdio.h>

int maxOfThree(int , int , int ); //func protocol

int maxOfThree(int a, int b, int c){ // func definition
    if(a>b && a>c){
        printf("%d is greater",a);
    }
    else if(b>a && b>c){
        printf("%d is greater",b);
    }
    else{
        printf("%d is greater",c);
    }
}
int main(){
    int x,y,z;
    printf(" enter x y z"); 
    scanf("%d %d %d", &x, &y, &z);
    maxOfThree(x, y, z);
    return 0;
 }









