class Solution {
public:
    bool checkAnagram(string a,string b){
        if(a.length()!=b.length())return false;
        int hash[26]={0};
        for(auto x:a)hash[x-'a']++;
        for(auto x:b)hash[x-'a']--;
        for(int i=0;i<26;i++)if(hash[i]!=0)return false;
        return true;
    }
    // int value(string str){
    //     int sum=0;
    //     for(auto x:str)sum+=x-'a';
    //     return sum;
    // }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        //unordered_multimap<pair<int,int>,vector<string>>m;
//         for(auto x:strs){
//             //int val = value(x);
// //             if(m.find({val,x})==m.end()){
// //                 m[{val,x.length()}]={x};
// //             }
// //             else{
// //                 int val = value(x);
// //                 int n = x.length();
// //                 string temp = m[{val,n}][0];
// //                 if(checkAnagram(x,temp)==true){
                    
// //                 }
// //             }
//             if(res.size()==0)res.push_back({x});
//             else{
//                 bool found=true;
//                 for(int i=0;i<res.size();i++){
//                     if(checkAnagram(res[i][0],x)==true){
//                         res[i].push_back(x);
//                         found=false;
//                         //cout<<y[0]<<" =  "<<x<<endl;
//                     }
//                 }
//                 if(found==true)res.push_back({x});
//             }
//         }
        
        unordered_map<string,vector<string>>m;
        for(auto x:strs){
            string temp = x;
            sort(temp.begin(),temp.end());
            m[temp].push_back(x);
        }
        for(auto x:m){
            res.push_back(x.second);
        }
        return res;
    }
};