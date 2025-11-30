class Solution {
public:
    int minSubarray(vector<int>& n, int p) {
        vector<long long>pref(n.size()+1,0);
        for(int i=0;i<n.size();i++){
            pref[i+1]=pref[i]+n[i];
        }
        long long sum = pref[n.size()];
        int t=sum %p;
        if(t==0) return 0;
        map<int,int>m;
        m[0]=0;
        int ans=n.size();
        for(int i = 1 ;i <= n.size();i++){
            int c= pref[i] % p;
            int need=(c-t+p) % p;
            if(m.count(need)){
                ans=min(ans,i-m[need]);
            }
            m[c]=i;
        }
        if(ans==n.size()) return -1;
        return ans;
    }
};