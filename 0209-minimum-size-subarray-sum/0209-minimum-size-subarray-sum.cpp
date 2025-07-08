class Solution {
public:
    int minSubArrayLen(int t, vector<int>& n) {
        int ans=INT_MAX;
        long long s=0;
        int j=0;
        for(int i=0;i<n.size();i++){
            s+=n[i];
            while(s>=t){
                ans=min(ans,(i-j+1));
                s-=n[j++];
            }
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};