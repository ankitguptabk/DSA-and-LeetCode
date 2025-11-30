class Solution {
public:
    int minSubarray(vector<int>& n, int p) {
        long long s=0;
        for(int x:n) s += x;
        int t = s%p;
        if(t == 0) return 0;

        unordered_map<int,int> m;
        m[0] = -1;

        long long pref = 0;
        int ans = n.size();

        for(int i=0;i<n.size();i++){
            pref = (pref+n[i])%p;

            int need = (pref-t+p) % p;

            if(m.count(need)){
                ans=min(ans, i-m[need]);
            }
            m[pref]=i;
        }
        if(ans==n.size()) return -1;
        else return ans;
    }
};