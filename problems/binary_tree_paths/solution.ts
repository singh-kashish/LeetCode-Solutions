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

function binaryTreePaths(root: TreeNode | null): string[] {
    let str ="";
    let res : string[]=[];
    dfs(root,str,res);
    return res;
};
function dfs(node:TreeNode|null, str:string,res:string[]):void{
    if(node===null){
        return;
    }
    if(str!=="")str+="->";
    str+=node.val;
    if(node.left==null && node.right==null)res.push(str);
    dfs(node.left,str,res);
    dfs(node.right,str,res)
};