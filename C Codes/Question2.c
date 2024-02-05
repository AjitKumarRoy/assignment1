#include <stdio.h>

int linearSearch(int arr[], int size, int target);

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
        int target;
        printf("Enter the key value to search: ");
        scanf("%d", &target);

        int ans = linearSearch(arr, n, target);
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
