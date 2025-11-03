class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        counts : Dict[string, int]  = {}
        for x in s:
            counts[x]=counts.get(x,0)+1
        for y in t:
            if counts.get(y,0)==0:
                return False
            counts[y]-=1
          
        return all(c==0 for c in counts.values());        