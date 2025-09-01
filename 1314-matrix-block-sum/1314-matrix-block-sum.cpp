class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& m, int k) {
        vector<vector<int>>prefsum(m.size(),vector<int>(m[0].size(),0));
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                prefsum[i][j] = m[i][j];
                if(i > 0) prefsum[i][j] += prefsum[i-1][j];
                if(j > 0) prefsum[i][j] += prefsum[i][j-1];
                if(i > 0 && j > 0) prefsum[i][j] -= prefsum[i-1][j-1];
            }
        }

        vector<vector<int>>ans(m.size(),vector<int>(m[0].size(),0));
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                int r1=max(0,i-k), c1=max(0,j-k);
                int r2 = min((int)m.size()-1, i+k);
                int c2 = min((int)m[0].size()-1, j+k);
                ans[i][j]=prefsum[r2][c2];
                if(r1>0){
                    ans[i][j]-=prefsum[r1-1][c2];
                }
                if(c1>0) ans[i][j]-=prefsum[r2][c1-1];
                if(r1>0 && c1>0) ans[i][j]+=prefsum[r1-1][c1-1];
            }
        }
        return ans;
    }
};