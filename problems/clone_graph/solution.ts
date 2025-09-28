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
    function dfs(r: _Node|null): _Node|null{
        if(processed.has(r))return processed.get(r);
        let copy = new Node(r.val,[]);
        processed.set(r,copy);
        for(let n of r.neighbors){
            copy.neighbors.push(dfs(n));
        }
        return copy;
    } 
    return dfs(node);
};