/*
Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged,
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example:
    Input: nums1 = [1,2,3,0,0,0]
           nums2 = [2,5,6]
           m = 3
           n = 3
    Output: [1,2,2,3,5,6]
 */

public class MergeSortedArray {
    public static void main(String args[]) {
        int[] nums1 = new int[] {1,2,3,0,0,0};
        int[] nums1 = new int[] {2,5,6};
        int m = 3;
        int n = 3;

        int p1 = m - 1;
        int p2 = n - 1;
        int k = m + n - 1;

        while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] < nums2[p2]) {
        nums1[k--] = nums2[p2--];
        }
        else {
        nums1[k--] = nums1[p1--];
        }
        }
        while (p2 >= 0) {
        nums1[k--] = nums2[p2--];
        }
    }
}
