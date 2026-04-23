/*Q15. [calloc vs malloc]
Write a C program that allocates an array of 5 integers using both malloc() and calloc(). Before
initializing, print the garbage values from malloc() and the zero-initialized values from calloc(). Explain
the difference in signature: malloc(size) vs calloc(count, size).
■ Hint: Print immediately after allocation without initializing.
■ Tests: calloc zero-initialization, malloc vs calloc distinction*/
#include<stdio.h>
int main(){
    int i;
     int *m = (int *)malloc(5 * sizeof(int)); //m,c are behaves like an array, but technically they are pointers.
     int *c = (int *)calloc(5 , sizeof(int));
     if(m==NULL || c==NULL){
        printf("memory allocation failed!!\n");
        return 1; //error
     }
    printf("values using malloc(garbage): \n");
    for(i=0;i<5;i++){
        printf("%d ",m[i]);
        //printf("%d ",*(m+i))
    }
    printf("\nvalues using calloc(initialized to zero): \n");
    for(i=0;i<5;i++){
        printf("%d ",c[i]);
    }
    free(m);
    free(c);

    return 0; //terminate
}


