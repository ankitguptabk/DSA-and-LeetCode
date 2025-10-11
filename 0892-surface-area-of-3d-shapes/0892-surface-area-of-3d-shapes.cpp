class Solution {
public:
    int surfaceArea(vector<vector<int>>& g) {
        int ans=0;
        for (int i = 0; i < g.size(); i++) {
            for (int j = 0; j <g[0].size(); j++) {
                if (g[i][j] >0) {
                    ans += (g[i][j]*6)-((g[i][j] - 1) * 2);
                    if (i > 0) {
                        ans-=2*min(g[i][j], g[i - 1][j]);
                    }
                    if (j>0) {
                        ans-=2*min(g[i][j], g[i][j - 1]);
                    }
                }
            }
        }
        return ans;
    }
};