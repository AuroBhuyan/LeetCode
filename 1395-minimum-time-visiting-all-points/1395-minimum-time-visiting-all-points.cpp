class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int l = points.size();
        int t = 0;
        for(int i=0;i<l-1;i++){
           int x = abs(points[i][0] - points[i+1][0]);
           int y = abs(points[i][1] - points[i+1][1]);
           t+=max(x,y);
        }

        return t;
    }
};