#include <stdio.h>
int main()
{
    int n = 100;
     int arr[n];

        printf("Welcome to Guess the Number Game\n");
        printf("Think of any secret number between 1 to 100\n");

        //count the number of attempts
        int count = 0;

        //binary search algo
        int start = 0;
        int end = n-1;

        while (start <= end) {
            count++;

            int mid = start + (end - start) / 2;
            printf("Is the secret number %d? (1:Too low, 2:Too high, 3:Correct) : ",(mid+1));
            int guess;;
            scanf("%d",&guess);
            if (guess == 3) {
                printf("Congratulations! The number 29 is found in %d attempts.",count);
            }

            if (guess == 2) {
                end = mid - 1;
            }
            if (guess == 1) {
                start = mid + 1;
            }
        }

    return 0;
}