import java.util.*;
public class GuessTheNumber {
    public static void main(String[] args) {
        int[] arr = new int[100];
        Scanner sc = new Scanner(System.in);

        System.out.println("Welcome to Guess the Number Game");
        System.out.println("Think of any secret number between 1 to 100");

        //count the number of attempts
        int count = 0;

        //binary search algo
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            count++;

            int mid = start + (end - start) / 2;
            System.out.print("Is the secret number "+(mid+1)+"? (1:Too low, 2:Too high, 3:Correct) : ");
            int guess = sc.nextInt();
            if (guess == 3) {
                System.out.println("Congratulations! The number 29 is found in "+count+" attempts.");
            }

            if (guess == 2) {
                end = mid - 1;
            }
            if (guess == 1) {
                start = mid + 1;
            }
        }
    }

}
