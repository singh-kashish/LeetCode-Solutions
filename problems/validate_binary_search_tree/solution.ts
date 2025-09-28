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

function isValidBST(root: TreeNode | null): boolean {
    let minVal = -Infinity, maxVal = Infinity;
    return dfs(root,minVal,maxVal);
};
function dfs(root:TreeNode | null, minVal: number, maxVal:number): boolean{
    if(!root)return true;
    if(root.val>=maxVal || root.val<=minVal)return false;
    return dfs(root.left,minVal,root.val) && dfs(root.right,root.val,maxVal);
}