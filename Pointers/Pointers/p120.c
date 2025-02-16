//C Program to Find the Largest Element in an Array using Pointers
#include <stdio.h>

int findLargest(int *arr, int size) {
    int *ptr = arr;
    int max = *ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 25, 89, 65, 14};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, size);
    printf("Largest element: %d\n", largest);

    return 0;
}