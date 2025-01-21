class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int>ans;
        int l=0,r=m[0].size()-1,t=0,b=m.size()-1;
        while(t<=b && l<=r){
            for(int i=l;i<=r;i++){
                ans.push_back(m[t][i]);
            }
            t++;
            for(int i=t;i<=b;i++){
                ans.push_back(m[i][r]);
            }
            r--;
            if(t<=b){
                for(int k=r;k>=l;k--){
                    ans.push_back(m[b][k]);
                }
                b--;
            }
            if(l<=r){
                for(int k=b;k>=t;k--){
                    ans.push_back(m[k][l]);
                }
                l++;
            }
        }
        return ans;
    }
};