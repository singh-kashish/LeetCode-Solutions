function longestCommonSubsequence(text1: string, text2: string): number {
    const len1 = text1.length, len2 = text2.length;
    let lcs : number[][] = Array.from({length:len1+1},()=>Array(len2+1).fill(0));
    for(let charFromText1=1; charFromText1<=len1; charFromText1++){
        for(let charFromText2 = 1; charFromText2<=len2; charFromText2++){
            if(text1[charFromText1-1]==text2[charFromText2-1])lcs[charFromText1][charFromText2] = 1 + lcs[charFromText1-1][charFromText2-1];
            else lcs[charFromText1][charFromText2] = Math.max(lcs[charFromText1-1][charFromText2],lcs[charFromText1][charFromText2-1]);
        }
    }
    return lcs[len1][len2]
};