// // 5. Write a program containing a function which reverses the array passed to it.
// #include<stdio.h>

#include <stdio.h>

void printArray(int a[], int n){ // int n is size of an array
    for (int i = 0; i < n; i++)
    {
       printf("%d ", a[i]); 
    }
    printf("\n");
}

void reverse(int arr[], int n){
   /* for  i from 0 to n/2
    arr[i] arr[n-i-1] 
    */
   int temp; //temporary variable 1, 2, 3, 4, 5, 6, 7
   for (int i = 0; i < n/2; i++) 
   { 
    temp = arr[i]; 
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp; 
   }
   
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6 };
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}
