class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row = accounts.size();
        int col = accounts[0].size();
        int maxWealth = 0;
        int wealth = 0;
        for(int i = 0;i<row;i++){
            wealth = 0;
            for(int j=0;j<col;j++){
                wealth += accounts[i][j];
            }
           maxWealth = max(wealth,maxWealth); 
        }
        return maxWealth;
    }
};