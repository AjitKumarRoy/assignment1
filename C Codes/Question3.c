#include <stdio.h>

int linearSearch(int arr[], int size, int target);
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

    char ch = 'y';

    while (ch != 'n') {
        int target, search;
        printf("Enter the key value to search: ");
        scanf("%d", &target);
        printf("Do you want to use 1: Linear Search || 2: Binary Search => ");
        scanf("%d", &search);

        int ans;
        if (search == 1) {
            ans = linearSearch(arr, n, target);
        } else {
            ans = binarySearch(arr, n, target);
        }

        if (ans == -1) {
            printf("No, the number %d is not found in the array\n", target);
        } else {
            printf("Yes, the number %d is found at position %d.\n", target, ans);
        }

        printf("Do you want to search again? (y/n): ");
        scanf(" %c", &ch);
    }

    return 0;
}

// Linear search function
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (target == arr[i]) {
            return i;
        }
    }
    return -1;
}

// Binary search function
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