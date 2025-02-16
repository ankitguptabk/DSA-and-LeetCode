class Solution {
public:
    int minPairSum(vector<int>& n) {
        int ans=0;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size()/2;i++){
            ans=max(ans,n[i]+n[n.size()-1-i]);
        }
        return ans;
    }
};