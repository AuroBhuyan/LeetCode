class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rowLen = grid.size();
        int colLen = grid[0].size();
        int row = grid.size()-1;
        int col = 0;
        int ans = 0;
        while(row>=0 && col<colLen){
            if(grid[row][col]>=0){
                col++;
            }else{
                ans += colLen-col;
                row--;
            }

        }

        return ans;
    }
};