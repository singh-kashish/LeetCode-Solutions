function findOrder(numCourses: number, prerequisites: number[][]): number[] {
    let adj : number [][] = Array.from({length:numCourses},()=>[]);
    let indegree : number[] = new Array(numCourses).fill(0);
    // Build Graph b(i)->a(i)
    for(const [x,y] of prerequisites){
        adj[y].push(x);
        indegree[x]++;
    }
    //Queue of courses with no prerequisites
    let queue:number[]=[];
    for(let i=0;i<numCourses;i++){
        if(indegree[i]===0)queue.push(i);
    }
    let order:number[]=new Array();
    
    //Kahn's Algo
    while(queue.length){
        const u = queue.shift();
        order.push(u);
        for(const v of adj[u]){
            if(--indegree[v]===0)queue.push(v);
        }
    }
    // If all courses are processed, return order; otherwise cycle is present->Not possible to complete
    return order.length===numCourses?order:[];

};