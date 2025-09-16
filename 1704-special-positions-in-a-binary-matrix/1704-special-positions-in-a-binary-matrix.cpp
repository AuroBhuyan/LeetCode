class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<int> rowHash(row,0);
        vector<int> colHash(col,0);

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==1)
                {
                    rowHash[i]++;
                    colHash[j]++;
                }
            }
        }

        int count = 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==1 && rowHash[i]==1 && colHash[j]==1)
                count++;
            }
        }

        return count;

    }
};