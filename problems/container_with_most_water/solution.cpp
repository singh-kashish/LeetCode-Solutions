class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftPtr = 0 , rightPtr = height.size()-1;
        int  result = 0;
        while(leftPtr<rightPtr){
            int currMaxHt = min(height[leftPtr],height[rightPtr]);
            result = max(result, currMaxHt * (rightPtr-leftPtr));
            while( height[leftPtr]<=currMaxHt and leftPtr<rightPtr)leftPtr++;
            while(height[rightPtr]<=currMaxHt and rightPtr>leftPtr)rightPtr--;
        }
        return result;
    }
};