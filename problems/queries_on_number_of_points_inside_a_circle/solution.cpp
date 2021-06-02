class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
       vector<int>ans;
        for(auto x:queries){
            int a=x[0],b=x[1],r=x[2];
            int count=0;
            for(auto y:points){
                int p=y[0],q=y[1];
                if(sqrt(pow(a-p,2) + pow(b-q,2))<=r)count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};