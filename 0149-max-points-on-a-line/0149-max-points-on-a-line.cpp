class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {

        int maxSlope = 1;

        for (int i = 0; i < points.size() - 1; i++) {
            unordered_map<double, int> slopeCount;
            for (int j = i + 1; j < points.size(); j++) {
                int dy = points[j][1] - points[i][1];
                int dx = points[j][0] - points[i][0];
                
                if(dx==0) slopeCount[INT_MAX]++;
                else {
                    double slope = (double)dy/dx;
                    slopeCount[slope]++;
                }
            }

            for (auto& ele : slopeCount) {
                maxSlope = max(maxSlope, ele.second+1);
            }
        }

        return maxSlope;
    }
};