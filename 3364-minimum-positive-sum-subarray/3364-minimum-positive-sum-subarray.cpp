class Solution {
public:
    int minimumSumSubarray(vector<int>& n, int l, int r) {
        int ans=INT_MAX;
        for(int i=0;i<n.size();i++){
            int s=0;
            for(int j=i;j<n.size();j++){
                s+=n[j];
                int length=j-i+1;
                if(length>=l && length<=r && s>0){
                    ans=min(ans,s);
                }
            }
        }
        if(ans>0 && ans!=INT_MAX) return ans;
        else return -1;
    }
};