class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& e) {
        vector<int>seen(n,0);
        vector<int>ans;
        for(int i=0;i<e.size();i++){
            seen[e[i][1]]=1;
        }
        for(int i=0;i<n;i++){
            if(seen[i]!=1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};