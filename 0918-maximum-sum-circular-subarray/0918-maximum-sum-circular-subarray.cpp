class Solution {
public:
    int maxSubarraySumCircular(vector<int>& n) {
        int ans=INT_MIN;
        int tsum=n[0], cmax=n[0],cmin=n[0];
        int maxs=n[0],mins=n[0];
        for(int i=1;i<n.size();i++){
            tsum+=n[i];
            cmax=max(n[i],cmax+n[i]);
            maxs=max(maxs,cmax);

            cmin=min(n[i],cmin+n[i]);
            mins=min(mins,cmin);
        }
        if(maxs<0) return maxs;
        ans=max(maxs,tsum-mins);
        return ans;
    }
};