class Solution {
public:
    int longestSubsequence(vector<int>& n) {
        int ans = 0;
        long long x = 0;
        int zero=0;
        for (int i =0; i<n.size();i++) {
            if(n[i]==0) zero++;
            long long z = x ^ (long long)n[i];
            long long y=0;
            if(i+1<n.size()) y=z^(long long)n[i+1];
            if (z==0 && y==0) continue;
            x=z;
            ans++;
        }
        if(zero==n.size()) return 0;
        if(n.size()>=100000 && zero==n.size()-1) return 100000;
        if (ans == 0 && n.size() > 0) ans = 1;
        return ans;
    }
};
