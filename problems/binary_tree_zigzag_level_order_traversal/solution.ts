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

function zigzagLevelOrder(root: TreeNode | null): number[][] {
    let res = new Array<Array<number>>();
    if(!root)return res;
    let level=0;
    let queue=new Array<TreeNode>();
    queue.push(root);
    while(queue.length){
        let n = queue.length;
        let temp = new Array<number>();
        while(n--){
            let curr:TreeNode = queue.shift();
            temp.push(curr.val);
            if(curr.left)queue.push(curr.left);
            if(curr.right)queue.push(curr.right);
        }
        if(level%2==0)res.push(temp);
        else res.push(temp.reverse());
        level++;
    }
    return res;
};