function maxArea(height: number[]): number {
    let start=0, end=height.length-1;
    if(height.length<2)return 0;
    let maxVol=0;
    while(start<end){
        const volHere = Math.min(height[end],height[start])*(end-start);
        maxVol=Math.max(volHere,maxVol);
        if(height[start]>height[end])end--;
        else start++;
    }
    return maxVol;
};