class Solution {
public:
    int longestSubarray(vector<int>& n) {
        int s = n.size();
        if (s == 0) return 0;
        if (s == 1) return 1;
        vector<int> l(s, 1), r(s, 1);

        for (int i = 1; i < s; i++) {
            if (n[i] >= n[i - 1]) l[i] = l[i - 1] + 1;
        }
        for (int i = s - 2; i >= 0; i--) {
            if (n[i] <= n[i + 1]) r[i] = r[i + 1] + 1;
        }
        int ans = 1;
        for (int i = 0; i < s; i++) {
            ans = max(ans, l[i]);
        }
        for (int i = 0; i < s; i++) {
            if (i == 0) ans = max(ans, 1 + r[1]);
            else if (i == s - 1) ans = max(ans, 1 + l[s - 2]);
            else{
                ans = max(ans, l[i - 1] + 1);
                ans = max(ans, r[i + 1] + 1);
                if (n[i + 1] >= n[i - 1]) ans = max(ans, l[i - 1] + 1 + r[i + 1]);
            }
        }
        return min(ans, s);
    }
};