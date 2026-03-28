#include<stdio.h>

int  binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1; // high will be the last element
    //start searching 
    while(low<=high){
    mid = (low + high)/2;

    if(arr[mid]==element){
        return mid;
    }
    else if(arr[mid]<element){
        low = mid+1; // because ab jo mid hum bnare hai that will not be the mid, so we are basically excluding the mid and checking for al the elements after it
    }
    else if(arr[mid]>element){
        high = mid -1;
    }
}
return -1;
    //searching ends

}
int main(){
    int arr[] = {1,2,3,54,456,8224,22435,42345,123436}; //works with only sorted array
    int size = sizeof(arr)/sizeof(int);
    int element = 456;
    int searchIndex = binarySearch(arr,size,element);
    printf("The element %d was found at index %d and size is %d \n",element ,searchIndex,size);
    return 0;
}