//insert an element in an array
#include <stdio.h>

int main() {
    int n, pos, element;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[100]; // extra space

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &element);

    // Check valid position
    if(pos < 0 || pos > n) {
        printf("Invalid position!");
        return 0;
    }

    // Shift elements to right
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;
    n++;

    // Print updated array
    printf("Updated array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}