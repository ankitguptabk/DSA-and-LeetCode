class Solution {
public:
    int numSubarraysWithSum(vector<int>& n, int g) {
        vector<int>pref(n.size()+1,0);
        int ans=0;
        for(int i=0;i<n.size();i++){
            pref[i+1]=pref[i]+n[i];
        }
        for(int i=0;i<n.size();i++){
            for(int j=i;j>=0;j--){
                if(pref[i+1]-pref[j]==g) ans++;
            }
        }
        return ans;
    }
};