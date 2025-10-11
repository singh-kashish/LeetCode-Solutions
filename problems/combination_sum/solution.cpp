class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        sort(candidates.begin(),candidates.end());
        vector<int>path;
        backTrackDFS(candidates,0,path,result,target);
        return result;
    }
    void backTrackDFS(vector<int>&candidates, int start, vector<int>& path, vector<vector<int>>&result, int remaining){
        if(remaining==0){
            result.push_back(path);
            return;
        }
        if(remaining<0)return;
        for(int i=start;i<candidates.size();i++){
            int currCandidate = candidates[i];
            if(remaining<currCandidate)break;
            path.push_back(currCandidate);
            backTrackDFS(candidates,i,path,result,remaining-currCandidate);
            path.pop_back();
        }
    }
};