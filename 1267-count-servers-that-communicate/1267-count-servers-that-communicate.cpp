class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int ans=0;
        vector<vector<bool>>check(m, vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && check[i][j]==false){
                    for(int k=0;k<n;k++){
                        if(k!=j && grid[i][k]==1){
                            ans++;
                            check[i][j] =true;
                            break;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[j][i]==1 && check[j][i]==false){
                    for(int k=0;k<m;k++){
                        if(k!=j && grid[k][i]==1){
                            ans++;
                            check[j][i] =true;
                            break;
                        }
                    }
                }
            }
        }
        return ans;
    }
};