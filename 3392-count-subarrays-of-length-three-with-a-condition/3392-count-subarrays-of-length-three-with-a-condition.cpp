class Solution {
public:
    int countSubarrays(vector<int>& n) {
        int ans=0;
        for(int i=0;i<n.size()-2;i++){
            if(i+2<n.size() && (n[i]+n[i+2]==(n[i+1]/2.0))){
                ans++;
            }
        }
        return ans;
    }
};
