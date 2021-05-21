class Solution {
public:
    double space(vector<int>v){
        int x=v[0];
        int y=v[1];
        double res=sqrt((pow(x,2)+pow(y,2)));
        return res;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,int>>pq;
        for(int i=0;i<k;i++){
            double dist=space(points[i]);
            pq.push({dist,i});
        }
        for(int i=k;i<points.size();i++){
            double dist=space(points[i]);
            if(pq.top().first>dist){
                pq.pop();
                pq.push({dist,i});
            }
        }
        vector<vector<int>>res;
        while(pq.empty()==false){
            auto i=pq.top().second;
            res.push_back(points[i]);
            pq.pop();
        }
        return res;
    }
};