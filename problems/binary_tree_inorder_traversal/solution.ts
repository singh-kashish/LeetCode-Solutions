/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function inorderTraversal(root: TreeNode | null): number[] {
    let ans = new Array<number>;
    function inOrder(root:TreeNode|null):void{
        if(root){
            inOrder(root.left);
            ans.push(root.val);
            inOrder(root.right);
        }
    }
    inOrder(root);
    return ans;
};