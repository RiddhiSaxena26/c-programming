#include <stdio.h>

void insertSorted(int arr[], int *n, int element) {
    int i = *n - 1;

    // Shift elements to the right until the correct position is found
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the element
    arr[i + 1] = element;
    (*n)++; // Increase array size
}

int main() {
    int arr[100] = {2, 4, 6, 8, 10}; // Sorted array
    int n = 5; // Current size
    int element = 5;

    insertSorted(arr, &n, element);

    printf("Updated array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}