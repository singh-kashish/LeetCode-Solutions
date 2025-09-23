/**
 * Definition for _Node.
 * class _Node {
 *     val: number
 *     neighbors: _Node[]
 * 
 *     constructor(val?: number, neighbors?: _Node[]) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.neighbors = (neighbors===undefined ? [] : neighbors)
 *     }
 * }
 * 
 */


function cloneGraph(node: _Node | null): _Node | null {
    if(!node)return null;
    let processed = new Map<_Node,_Node>();
    function dfs(root:_Node):_Node{
        if(processed.has(root))return processed.get(root)!;
        const copy = new _Node(root.val);
        processed.set(root,copy);
        for(const x of root.neighbors){
            copy.neighbors.push(dfs(x));
        }
        return copy;
    }
    return dfs(node);
};