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

function levelOrder(root: TreeNode | null): number[][] {
    if(!root)return [];
    let queue : TreeNode[]=[];
    let result:number[][]=[];
    queue.push(root)!;
    while(queue.length>0){
        let n = queue.length;
        let level:number[]=[];
        while(n--){
            const front = queue.pop();
            level.push(front.val);
            if(front.left)queue.unshift(front.left);
            if(front.right)queue.unshift(front.right);
        }
        result.push(level);
    }
    return result;
};