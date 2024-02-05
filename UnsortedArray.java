import java.util.*;
public class UnsortedArray {
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

        System.out.println("Elements Before Sorting : "+Arrays.toString(arr));
        bubbleSort(arr);
        System.out.println("Elements After Sorting : "+Arrays.toString(arr));

        System.out.print("Enter the key element to search : ");
        int target = sc.nextInt();

        int ans = binarySearch(arr, target);
        System.out.println("Key is found at index : "+ans);

    }

    //bubble Sort function
    public static void bubbleSort(int[] arr) {
        for (int i = 0; i < arr.length-1; i++) {
            boolean swapped = false;
            for (int j = 0; j < arr.length-1-i; j++) {
                //check if the element at current index is greater the element at next index
                if (arr[j] > arr[j+1]) {
                    //swapp
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;

                    //checking swapped or not
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
        }
    }


    //binary search function
    public static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length-1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (target == arr[mid]) {
                return mid;
            }
            else if (target < arr[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return -1;
    }
}
