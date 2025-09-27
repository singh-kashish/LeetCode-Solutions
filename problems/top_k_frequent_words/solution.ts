function topKFrequent(words: string[], k: number): string[] {
    let freq = new Map<string,number>();
    for(const x of words){
        freq.set(x, (freq.get(x)||0)+1);
    }
    const maxFreq = words.length;
    let bucket: string[][] =new Array(maxFreq+1).fill(null).map(x=>[]);
    for(const [word,count] of freq){
        bucket[count].push(word);
    }
    let res:string[]=[];
    for(let i=bucket.length-1;i>=1 && res.length<k; i--){
        if(bucket[i].length===0)continue;
        bucket[i].sort((a,b)=>a.localeCompare(b));
        for(let j=0; j<bucket[i].length;j++){
            res.push(bucket[i][j]);
            if(k==res.length)break;
        }
    }
    return res;
};