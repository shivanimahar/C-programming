#include<stdio.h>
int main(){
    int i = 6;
    int* j = &i; //(i ka address k mai dala) //will store the address of integer
    int** k = &j; // j ka address k mai dala
    printf("The values of i is %d\n",i); // value of i
    printf("The values of i is %d\n",*j); // value of j
    printf("The values of i is %d\n",*(&i)); // value of i, * and & will cancel each other
    printf("The values of i is %d\n",i); // value of j, only *j will be left
    return 0;
}
