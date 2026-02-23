/*
CQ22. Write a C program using continue to print all numbers from 1 to 20
      except multiples of 3.
*/
#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=20;i++){
        if(i%3==0){
            continue;
    }

    printf("%d\n",i);
}
    return 0;
}