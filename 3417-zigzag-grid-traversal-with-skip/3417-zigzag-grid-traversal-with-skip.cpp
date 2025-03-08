class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& g) {
        vector<int>ans,answer;
        for(int i=1;i<g.size();i+=2){
            reverse(g[i].begin(),g[i].end());
        }
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                ans.push_back(g[i][j]);
            }
        }
        for(int c=0;c<ans.size();c+=2){
            answer.push_back(ans[c]);
        }
        return answer;
    }
};