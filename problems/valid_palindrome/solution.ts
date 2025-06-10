function isPalindrome(s: string): boolean {
    let l = 0, r = s.length-1;
    while(l<r){
        while(l<r && !isAlphaNumeric(s[l])){
            l++;
        }
        while(l<r && !isAlphaNumeric(s[r])){
            r--;
        }
        if(s[l].toUpperCase()!==s[r].toUpperCase()){
            return false;
        }
        l++;
        r--;
    }
    return true;
};
function isAlphaNumeric(s:string):boolean{
    return /^[a-z0-9]$/i.test(s);
}