class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,greater<>> minHeap;

       for(auto p:points){
        int x = p[0],y = p[1];
        int dist = x*x+y*y;
        minHeap.push({dist,{x,y}});
       }

       vector<vector<int>> ans;
       while(k--){
        auto[dist,coord] = minHeap.top();
        ans.push_back({coord.first,coord.second});
        minHeap.pop();
       }

       return ans;
    }
};