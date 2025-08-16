class Solution {
public:
    int equalPairs(vector<vector<int>>& g) {
        vector<vector<int>>x;
        int ans=0;
        for(int i=0;i<g.size();i++){
            vector<int>y;
            for(int j=0;j<g.size();j++){
                y.push_back(g[j][i]);
            }
            x.push_back(y);
        }
        for(int i=0;i<g.size();i++){
            for(int j=0;j<x.size();j++){
                if(g[i]==x[j]) ans++;
            }
        }
        return ans;
    }
};