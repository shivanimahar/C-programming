/*
CQ21. Write a C program to find the first occurrence of a number divisible
      by both 3 and 7 between 1 and 100, using a for loop and break.
*/
#include<stdio.h>
int main(){
      int i;
      for(i=1;i<=100;i++){
            if(i%3==0 && i%7==0){
                  printf("divisible  %d",i); // donottttttttt forgetttt format specifier in printfd
                  break;
            }
      }
      return 0; 
}
