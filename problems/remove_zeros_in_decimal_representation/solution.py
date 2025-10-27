class Solution:
    def removeZeros(self, n: int) -> int:
        s=str(n)
        s_no_zero=s.replace('0','')
        return int(s_no_zero)if s_no_zero else 0