class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0;
        int bot = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;

        while(top<=bot){
            int midrow = top+(bot-top)/2;
            if(matrix[midrow][left]>target) bot = midrow-1;
            else if(matrix[midrow][right]<target) top = midrow+1;
            else break;
        }

        if(top>bot) return false;

        int midrow = top+(bot-top)/2;
        while(left<=right){
            int midcol = left+(right-left)/2;
            if(matrix[midrow][midcol]==target) return true;
            else if(matrix[midrow][midcol]>target) right = midcol-1;
            else left = midcol+1;
        }

        return false;
    }
};