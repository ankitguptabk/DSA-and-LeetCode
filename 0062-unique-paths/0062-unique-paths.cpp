class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>x(m,vector<int>(n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                x[i][j]=x[i-1][j]+x[i][j-1];
            }
        }
        return x[m-1][n-1];
    }
};