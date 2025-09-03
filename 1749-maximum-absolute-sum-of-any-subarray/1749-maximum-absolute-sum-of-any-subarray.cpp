class Solution {
public:
    int maxAbsoluteSum(vector<int>& n) {
        int ans=0;
        vector<int>dpmax(n.size()), dpmin(n.size());
        dpmax[0]=n[0],dpmin[0]=n[0];
        ans=abs(n[0]);
        for(int i=1;i<n.size();i++){
            dpmax[i]=max(n[i],n[i]+dpmax[i-1]);
            dpmin[i]=min(n[i],n[i]+dpmin[i-1]);
            ans=max(ans,max(dpmax[i],abs(dpmin[i])));
        }
        return ans;
    }
};