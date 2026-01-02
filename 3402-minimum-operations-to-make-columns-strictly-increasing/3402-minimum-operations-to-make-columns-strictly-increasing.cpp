class Solution {
public:
    int minimumOperations(vector<vector<int>>& g) {
        int ans=0;
        int m=g.size(), n=g[0].size();
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                if(g[j][i]<=g[j-1][i]){
                    ans+=g[j-1][i]-g[j][i]+1;
                    g[j][i]+=g[j-1][i]-g[j][i]+1;
                }
            }
        }
        return ans;
    }
};