//  find second largest number in 1D array.

#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for(int i = 0;i<n;i++){
        if(arr[i]>max1){
            max2 = max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1){
            max2 = arr[i];
        }
    }
    if(max2==INT_MIN){
        printf("max2 doesnot exists");
    }
    else{
        printf("second largest value is: %d",max2);
    }
    return 0;
}



















