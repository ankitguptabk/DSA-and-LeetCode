class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int row_flip=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n/2;j++){
                if(grid[i][j]!=grid[i][n-1-j]){
                    row_flip++;
                }
            }
        }
        int col_flip=0;
        for(int j=0;j<n;j++){
            for(int i=0;i<m/2;i++){
                if(grid[i][j]!=grid[m-1-i][j]){
                    col_flip++;
                }
            }
        }
        int ans=min(row_flip,col_flip);
        return ans;
    }
};