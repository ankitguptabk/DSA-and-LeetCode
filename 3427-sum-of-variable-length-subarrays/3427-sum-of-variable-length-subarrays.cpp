class Solution {
public:
    int subarraySum(vector<int>& n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            for(int j=max(0,i-n[i]);j<=i;j++){
                ans+=n[j];
            }
        }
        return ans;
    }
};