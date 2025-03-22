class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        vector<int>ans(n.size(),1);
        int p=1;
        for(int i=0;i<n.size();i++){
            ans[i]=p;
            p*=n[i];
        }
        p=1;
        for(int i=n.size()-1;i>=0;i--){
            ans[i]*=p;
            p*=n[i];
        }
        return ans;
    }
};