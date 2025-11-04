class Solution {
public:
    int maximumStrongPairXor(vector<int>& n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            for(int j=i+1;j<n.size();j++){
                if(abs(n[i]-n[j])<=min(n[i],n[j])){
                    ans=max(ans,(n[i]^n[j]));
                }
            }
        }
        return ans;
    }
};