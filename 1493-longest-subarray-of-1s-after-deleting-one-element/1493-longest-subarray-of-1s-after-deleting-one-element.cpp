class Solution {
public:
    int longestSubarray(vector<int>& n) {
        int ans=0;
        int l=0,r=0,z=0;
        for(int r=0;r<n.size();r++){
            if(n[r]==0){
                z++;
            }
            while(z>1){
                if(n[l]==0){
                    z--;
                }
                l++;
            }
            ans=max(ans,r-l+1-z);
        }
        if(ans==n.size()) return ans-1;
        return ans;
    }
};