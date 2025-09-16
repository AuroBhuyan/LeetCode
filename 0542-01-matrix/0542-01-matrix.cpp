class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        vector<vector<int>> vis(row,vector<int>(col,0));
        vector<vector<int>> dist(row,vector<int>(col,0));
        queue<pair<int,int>> q;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    vis[i][j] = 1;
                }
            }
        }

        //dx = dircection of x
        int dx[] = {-1,0,1,0};
        int dy[] = {0,1,0,-1};

        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
                int nx = x+dx[i];
                int ny = y+dy[i];

                if(nx>=0 && ny>=0 && nx<row && ny<col && !vis[nx][ny]){
                    dist[nx][ny] = dist[x][y]+1;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
        }

        return dist;
    }
};