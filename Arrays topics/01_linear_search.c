#include<stdio.h>

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
    
}

int main(){
    int arr[] = {1,2,3,54,456,8224,22435,42345,6,123436}; //works with sort and un sort both
    int size = sizeof(arr)/sizeof(int);
    int element = 54;
    int searchIndex = linearSearch(arr,size,element);
    printf("The element %d was found at index %d and size is %d \n",element ,searchIndex,size);
    return 0;
}
