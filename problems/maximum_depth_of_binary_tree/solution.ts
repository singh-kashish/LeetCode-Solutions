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
function dropDownOneNode(node: TreeNode | null) : number{
    if(node===null)return 0;
    let leftDepth : number = dropDownOneNode(node.left);
    let rightDepth : number = dropDownOneNode(node.right);
    let currentDepth : number = 1 + Math.max(leftDepth,rightDepth);
    return currentDepth;
}
function maxDepth(root: TreeNode | null): number {
    
    return dropDownOneNode(root);

};