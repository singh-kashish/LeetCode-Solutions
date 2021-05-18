class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
     stack<int>st;
        int n = heights.size();
    int res = 0,curr,ht;
        for(int i = 0 ; i < n ; i++){
            while(st.empty()==false and heights[st.top()] >= heights[i]){
                ht=st.top();
                st.pop();
                curr = heights[ht] * ( st.empty() ? i : i - st.top() - 1 );
                res=max(res,curr);
            }
            st.push(i);
        }
        while(st.empty()==false){
            ht=st.top();
            st.pop();
            curr =  heights[ht] * ( st.empty() ? n : n - st.top() - 1 );
            res=max(res,curr);
        }
        return res;
    }
};