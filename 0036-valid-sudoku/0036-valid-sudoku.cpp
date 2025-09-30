class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9], col[9], cell[9];

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                char c = board[i][j];
                if (c == '.')
                    continue;
                int k = (i / 3) * 3 + (j / 3);
                if (row[i].count(c) || col[j].count(c) || cell[k].count(c))
                    return false;
                row[i].insert(c);
                col[j].insert(c);
                cell[k].insert(c);
            }
        }
        return true;
    }
};