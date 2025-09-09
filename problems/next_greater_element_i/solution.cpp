class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Using monotonic stack and hashMap to store next greater element
        vector<int>res;
        unordered_map<int,int>nextGreater;
        stack<int>st;
        for(auto x:nums2){
            while(!st.empty() && st.top()<x){
                nextGreater[st.top()]=x;
                st.pop();
            }
            st.push(x);
        }
        while(!st.empty()){
            nextGreater[st.top()]=-1;
            st.pop();
        }
        for(auto i:nums1){
            res.push_back(nextGreater[i]);
        }
        return res;
    }
};