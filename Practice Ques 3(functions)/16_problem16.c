/*
WAP to find the largest number from three num using function*/

#include<stdio.h>

int largest(int, int, int);

int largest(int a, int b, int c){
    if(a>c && a>b){
        printf("%d",a);
    }
    else if(b>a && b>c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }

}

int main(){
    int x, y, z;
    printf("enter x, y, z");
    scanf("%d %d %d",&x,&y,&z);
    largest(x,y,z);
    return 0;
}