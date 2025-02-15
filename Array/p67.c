//C program to sort an array using Merge Sort 

#include <stdio.h>

void merge(int arr[], int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;
        merge(arr, left, mid);
        merge(arr, mid + 1, right);

        int n1 = mid - left + 1;
        int n2 = right - mid;

        int leftArr[n1], rightArr[n2];

        for(int i = 0; i < n1; i++)
            leftArr[i] = arr[left + i];
        for(int j = 0; j < n2; j++)
            rightArr[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = left;
        while(i < n1 && j < n2) {
            if(leftArr[i] <= rightArr[j]) {
                arr[k] = leftArr[i];
                i++;
            } else {
                arr[k] = rightArr[j];
                j++;
            }
            k++;
        }

        while(i < n1) {
            arr[k] = leftArr[i];
            i++;
            k++;
        }

        while(j < n2) {
            arr[k] = rightArr[j];
            j++;
            k++;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    merge(arr, 0, n - 1);

    printf("Sorted array: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
