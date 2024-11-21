class Solution {
public:
    int maxSubArray(vector<int>& n) {
        int ans=INT_MIN;
        int a=0;
        for(int i=0;i<n.size();i++){
            a+=n[i];
            ans=max(ans,a);
            if(a<0) a=0;
        }
        return ans;
    }
};