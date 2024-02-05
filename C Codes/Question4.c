#include <stdio.h>

void bubbleSort(int arr[], int size);
int binarySearch(int arr[], int size, int target);


int main() {
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Elements Before Sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    printf("Elements After Sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int target;
    printf("Enter the key element to search: ");
    scanf("%d", &target);

    int ans = binarySearch(arr, n, target);
    printf("Key is found at index: %d\n", ans);

    return 0;
}


// Bubble Sort function
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size - 1 - i; j++) {
            // Check if the element at the current index is greater than the element at the next index
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Mark as swapped
                swapped = 1;
            }
        }
        // If no swapping occurred, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Binary Search function
int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (target == arr[mid]) {
            return mid;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}
