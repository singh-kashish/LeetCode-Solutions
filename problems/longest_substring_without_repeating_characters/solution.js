/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let longest = 0;
    let hash = new Set();
    let start = 0, end=0, res=0;
    const n=s.length;
    for(let end=0; end<s.length; end++){
    while(hash.has(s[end])){
        hash.delete(s[start]);
        start++;
    }
    hash.add(s[end]);
    res = Math.max(res,end-start+1);
}
return res;
};