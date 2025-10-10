class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& n) {
        int s=n.size();
        vector<int>ans(s,0);
        for(int i=0;i<s;i++){
            if(n[i]==0) ans[i]=n[i];
            else if(n[i]>0){
                ans[i]=n[(i+n[i])%s];
            }
            else {
                ans[i]=n[(i-abs(n[i])%s+s)%s];
            }
        }
        return ans;
    }
};