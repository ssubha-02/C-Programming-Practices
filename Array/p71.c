//C Program to Sort the Elements of an Array in Ascending Order 
#include <stdio.h>

void selectionSortAsc(int arr[], int n) {
    int i, j, minIdx, temp;
    for(i = 0; i < n-1; i++) {
        minIdx = i;
        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if(minIdx != i) {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSortAsc(arr, n);

    printf("Sorted array in ascending order: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
