class Solution {
public:
    int maxAscendingSum(vector<int>& n) {
        int ans=0;
        int a=0;
        for(int i=0;i<n.size();i++){
            a+=n[i];
            ans=max(ans,a);
            if(i!=n.size()-1 && n[i]>=n[i+1]){
                a=0;
            }
        }
        return ans;
    }
};