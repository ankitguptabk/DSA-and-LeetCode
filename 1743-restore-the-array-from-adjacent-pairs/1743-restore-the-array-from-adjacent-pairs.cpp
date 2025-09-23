class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& a) {
        vector<int>ans(a.size()+1);
        unordered_map<int,vector<int>>m;
        for(int i=0;i<a.size();i++){
            m[a[i][0]].push_back(a[i][1]);
            m[a[i][1]].push_back(a[i][0]);
        }
        int start=0;
        for(auto const &p:m){
            if(p.second.size()==1){
                start=p.first;
                break;
            }
        }
        ans[0]=start;
        ans[1]=m[ans[0]][0];
        for(int i=2;i<ans.size();i++){
            auto &neigh=m[ans[i-1]];
            if(neigh[0]==ans[i-2]){
                ans[i]=neigh[1];
            }
            else{
                ans[i]=neigh[0];
            }
        }
        return ans;
    }
};