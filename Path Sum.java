/*Question:-Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

A leaf is a node with no children.

 image link:-https://assets.leetcode.com/uploads/2021/01/18/pathsum1.jpg*/

//Solution

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int t;
    boolean helper(TreeNode root,int sum){
        if(root==null){
            return false;
        }
        if(root.left==null && root.right==null && sum+root.val==t){
            return true;
        }
        
        return helper(root.left,sum+root.val) || helper(root.right,sum+root.val);
    }
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if(root==null){
            return false;
        }
        t=targetSum;
        return helper(root,0);
    }
}

//solution link:-https://leetcode.com/submissions/detail/806143373/
