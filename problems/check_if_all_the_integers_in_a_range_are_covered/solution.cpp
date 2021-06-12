class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int>v(right+1,false);
        for(int i=0;i<ranges.size();i++){
            int start=ranges[i][0],end=ranges[i][1];
            for(int j=start;j<=end and j<=right;j++){
                v[j]=true;
            }
        }
        for(int i=left;i<=right;i++)if(v[i]==false)return false;
        return true;
        
    }
};