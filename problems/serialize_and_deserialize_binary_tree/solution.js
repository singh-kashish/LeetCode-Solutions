/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */

/**
 * Encodes a tree to a single string.
 *
 * @param {TreeNode} root
 * @return {string}
 */
var serialize = function(root) {
    if(!root)return "[]";
    let tree = [];
    let q = [root]
    while(q.length>0){
        let currNode = q.shift();
        if(currNode){
            tree.push(String(currNode.val));
            q.push(currNode.left);
            q.push(currNode.right);
        } else{
            tree.push("null");
        }
    }
    // Remove trailing nulls
    let end=tree.length-1;
    while(end>=0 && tree[end]==="null"){
        end--;
    }
    const trimmed = tree.slice(0,end+1);
    return `[${trimmed.join(",")}]`;
};

/**
 * Decodes your encoded data to tree.
 *
 * @param {string} data
 * @return {TreeNode}
 */
var deserialize = function(data) {
    if(data===null || data===undefined)return null;
    const s = String(data).trim();
    if(s==="[]")return null;
    if(s[0]!=="[" || s[s.length-1]!=="]")return;
    const raw = s.slice(1,-1);
    if(raw.length==0)return null;
    const tokens = raw.split(",");
    // First token is root
    const first = tokens[0];
    if(first==="null"||first==="")return null;
    const rootValue = parseInt(first,10);
    if(Number.isNaN(rootValue))return;
    let root  = new TreeNode(rootValue);
    let q = [root];
    let i=1;
    while(q.length>0 && i<tokens.length){
        let node = q.shift();
        if(i<tokens.length){
            const leftToken = tokens[i++];
            if(leftToken!=="null"){
                const leftVal = parseInt(leftToken,10);
                if(!Number.isNaN(leftVal)){
                    node.left = new TreeNode(leftVal);
                    q.push(node.left);
                }
            }
        }
        if(i<tokens.length){
            const rightToken = tokens[i++];
            if(rightToken!=="null"){
                const rightVal = parseInt(rightToken,10);
                if(!Number.isNaN(rightVal)){
                    node.right = new TreeNode(rightVal);
                    q.push(node.right);
                }
            }
        }
    }
    return root;
};

/**
 * Your functions will be called as such:
 * deserialize(serialize(root));
 */