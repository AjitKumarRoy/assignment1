import java.util.*;
public class LinearSearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter the elements of array : ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print("Element "+(i+1)+" : ");
            arr[i] = sc.nextInt();
        }

        char ch = 'y';

        while (ch != 'n') {
            System.out.print("Enter the key value to search : ");
            int target = sc.nextInt();
            int ans = linearSearch(arr, target);
            if (ans == -1) {
                System.out.println("No, the number "+target+" is not found in the array");
            } else {
                System.out.println("Yes, the number "+target+" is found at position "+ans+".");
            }
            System.out.print("Do you want to search again?(y/n) : ");
            ch = sc.next().charAt(0);
        }
    }

    //linear search function
    public static int linearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (target == arr[i]) {
                return i;
            }
        }
        return -1;
    }
}
