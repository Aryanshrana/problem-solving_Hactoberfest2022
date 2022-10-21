/*Question:-Given the root of a binary tree, invert the tree, and return its root.

 

Example 1:
image link:-https://assets.leetcode.com/uploads/2021/03/14/invert1-tree.jpg
*/

//solution
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

public TreeNode invertTree(TreeNode root) {
    
    helper(root);
    return root;
}

private void helper(TreeNode root)
{
    if(root==null)return;
    
    TreeNode temp=root.left;
    root.left=root.right;
    root.right=temp;
    
    helper(root.left);
    helper(root.right);
    
}
}
//submission link:-https://leetcode.com/submissions/detail/806137566/
