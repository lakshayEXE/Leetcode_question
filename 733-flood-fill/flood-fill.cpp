class Solution {
public:

    vector<vector<int>> dfs(vector<vector<int>>& image, int sr, int sc, int iniColor,int color){
        int delRow[] = {-1,0,+1,0};
        int delCol[] = {0,1,0,-1};
        image[sr][sc]= color;
        for(int i = 0; i<4;i++){
            int row = sr + delRow[i];
            int col = sc + delCol[i];
            if((row >=0 && row<image.size() ) &&
                (col>=0 && col<image[0].size()) &&(image[row][col] == iniColor && image[row][col] != color)){

                dfs(image,row,col,iniColor,color);
            }
        }

        return image;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int iniColor = image[sr][sc];
        vector<vector<int>>ans =image;
        image[sr][sc] = color;
        dfs(ans,sr,sc,iniColor,color);
        return ans;
    }
};