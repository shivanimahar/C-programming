/*[Multiple Return Values via Pointers]
Write a C function void statistics(int *arr, int n, int *max, int *min, float *avg) that computes the
maximum, minimum, and average of an array and returns all three values through pointer
parameters. Call it from main() and print the results.
■ Hint: Update *max, *min, *avg inside the function — changes are visible in main().
■ Tests: output parameters, pointer as return mechanism. 
*/
#include <stdio.h>
void statistics(int *arr, int n, int *max, int *min, float *avg) {
    int sum = 0;

    // initialize max and min
    *max = *arr;
    *min = *arr;

    for (int i = 0; i < n; i++) {
        if (*(arr + i) > *max)
            *max = *(arr + i);

        if (*(arr + i) < *min)
            *min = *(arr + i);

        sum += *(arr + i);
    }

    *avg = (float)sum / n;
}

int main() {
    int arr[] = {10, 20, 5, 40, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max, min;
    float avg;

    statistics(arr, n, &max, &min, &avg);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Average = %.2f\n", avg);

    return 0;
}