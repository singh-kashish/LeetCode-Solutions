class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        if not intervals:
            return []
        sortArr = sorted(intervals, key=lambda x: x[0])
        res : List[List[int]] = []
        currStart, currEnd=sortArr[0]
        for i in range(1,len(sortArr)):
            start,end = sortArr[i]
            if start<=currEnd:
                currEnd = max(currEnd,end)
            else:
                res.append([currStart,currEnd])
                currStart, currEnd = start,end    
        res.append([currStart,currEnd])
        return res