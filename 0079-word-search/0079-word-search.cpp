class Solution {
public:
    bool  dfs(int i,int j,string &word,vector<vector<char>> &board,int c){
            //base case;
            if(c==word.size()) return true;
            if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || word[c]!=board[i][j]) return false;

            //visited
            char t = board[i][j];
            board[i][j] = '#';

            //Traversal
            bool isFound = dfs(i+1,j,word,board,c+1) || dfs(i-1,j,word,board,c+1) || dfs(i,j+1,word,board,c+1) || dfs(i,j-1,word,board,c+1);

            //Backtracking
            board[i][j] = t;

            return isFound;
    }
     
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && dfs(i,j,word,board,0)){
                    return true;
                }
            }
        } return false;
    }
};