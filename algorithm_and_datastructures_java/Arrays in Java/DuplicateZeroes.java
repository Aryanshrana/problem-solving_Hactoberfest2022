/*
A fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.
Example:
    Input: arr = [1,0,2,3,0,4,5,0]
    Output: [1,0,0,2,3,0,0,4]
 */
public class DuplicateZeroes {
    public static void main(String args[]) {
        int[] arr = new int[] {1, 0, 2, 3, 0, 4, 5, 0};
        int[] temp = new int[arr.length];
        int k = 0;
        for (int i : arr) {
            temp[k++] = i;
        }
        k = 0;
        int i = 0;
        while (k < arr.length && k != arr.length - 1) {
            if (temp[i] == 0) {
                arr[k++] = temp[i++];
                arr[k++] = 0;
            } else {
                arr[k++] = temp[i++];
            }
        }
    }
}
