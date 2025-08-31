class Solution {
public:
    long long maxProduct(vector<int>& n) {
        int maxi = 0;
        for (int x : n) maxi = max(maxi, x);
        int k = log2(maxi) + 1;
        int mask = (1 << k) - 1;
        vector<int> dp(mask + 1, 0);
        for (int x : n) dp[x] = x;
        for (int i = 0; i < k; i++) {
            for (int m = 1; m <= mask; m++) {
                if (m & (1 << i)) dp[m] = max(dp[m], dp[m ^ (1 << i)]);
            }
        }
        long long ans = 0;
        for (int x : n) ans = max(ans, 1LL * x * dp[mask ^ x]);
        return ans;
    }
};
