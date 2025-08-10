class Solution {
public:
    int maxSum(vector<vector<int>>& g) {
        int ans=0,s=0;;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(j+2<g[0].size()&& i+2<g.size()){
                    s=g[i][j]+g[i][j+1]+g[i][j+2]+g[i+1][j+1]+g[i+2][j]+g[i+2][j+1]+g[i+2][j+2];
                }
                ans=max(ans,s);
                s=0;
            }
        }
        return ans;
    }
};