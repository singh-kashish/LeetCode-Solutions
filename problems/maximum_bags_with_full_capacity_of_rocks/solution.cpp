class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.first-a.second<b.first-b.second;
    }
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int res=0,n=capacity.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({capacity[i],rocks[i]});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++){
            if(additionalRocks>=0){
                if(v[i].second<v[i].first and additionalRocks>=v[i].first-v[i].second){
                additionalRocks-=(v[i].first-v[i].second);
                res++;
            }
            else if(v[i].first==v[i].second){
                res++;
            }
            } else break;
        }
        return res;
    }
};