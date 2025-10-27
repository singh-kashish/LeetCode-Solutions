/**
 * @param {number} n
 * @return {number}
 */
var removeZeros = function(n) {
    let res=0;
    const s = String(n);
    const t = s.replace(/0/g,'');
    return t.length?Number(t):0;
};