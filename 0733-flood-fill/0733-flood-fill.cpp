class Solution {
public:

   void dfs(int i,int j, vector<vector<int>> &image,int color,int oc){
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]!=oc) return;

        image[i][j] = color;

        dfs(i+1,j,image,color,oc);
        dfs(i-1,j,image,color,oc);
        dfs(i,j+1,image,color,oc);
        dfs(i,j-1,image,color,oc);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oc = image[sr][sc];

        if (oc == color) 
            return image;

        dfs(sr,sc,image,color,oc);
        return image;
    }
};