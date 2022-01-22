class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>m;
        for(int i=0;i<list1.size();i++){
            m[list1[i]]=i;
        }
        vector<string>res;
        int prev=INT_MAX;
        for(int i=0;i<list2.size();i++){
            if(m.find(list2[i])!=m.end()){
                if(prev>i+m[list2[i]]){
                    prev = i+m[list2[i]];
                    res.clear();
                    res.push_back(list2[i]);
                }
                else if(prev==i+m[list2[i]]){
                    res.push_back(list2[i]);
                }
            }
        }
        return res;
    }
};