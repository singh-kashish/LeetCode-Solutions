function longestPalindrome(s: string): string {
    let n = s.length;
    if(n<=1)return s;
    let dp: boolean[][]  = Array.from({length:n}, ()=>Array(n).fill(false));
    for(let i=0;i<n;i++)dp[i][i]=true;
    let start=0, maxLength=1;
    for(let L = 2;L<=n;L++){// Substring of size L
        for(let left=0; left+L-1<n;left++){//
            const right = left+L-1;
            if((s[left] == s[right]) && (L<=3 || dp[left+1][right-1])){
                dp[left][right]=true;
                if(L>maxLength){
                    start = left;
                    maxLength = L;
                }
            }
        }
    }
    return s.slice(start,start+maxLength); 
};