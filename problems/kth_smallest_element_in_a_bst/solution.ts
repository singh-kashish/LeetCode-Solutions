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

function kthSmallest(root: TreeNode | null, k: number): number {
    let st:TreeNode[]=[];
    let curr:TreeNode|null = root;
    while(curr || st.length){
        while(curr){
            st.push(curr);
            curr = curr.left;
        }
        const node = st.pop()!;
        k--;
        if(k==0)return node.val;
        curr = node.right;
    }
    return -1;
};