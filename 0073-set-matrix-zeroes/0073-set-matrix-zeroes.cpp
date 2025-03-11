class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> rflag(r,0);
        vector<int> cflag(c,0);

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0)
                {
                    rflag[i] = 1;
                    cflag[j] = 1;
                }
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(rflag[i]==1 || cflag[j]==1){
                    matrix[i][j] = 0;
                }
                
            }
        }


    }
};