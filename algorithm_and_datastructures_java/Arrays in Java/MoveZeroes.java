/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 */
public class Solution {
    public static void main(String args[]) {
        int[] nums = new int[] {0, 1, 0, 3, 12};
        int index = 0;
        for (int i = 0; i < nums.length; ++i) {
            if (nums[i] != 0) {
                int temp = nums[index];
                nums[index] = nums[i];
                nums[i] = temp;
                index++;
            }
        }
    }
}
