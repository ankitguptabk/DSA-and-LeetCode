class Solution {
public:
    long long maxProduct(vector<int>& n) {
        if (n.size() < 2) return 0;

        int max_val = *max_element(n.begin(), n.end());
        int k = static_cast<int>(floor(log2(max_val))) + 1;
        int mask = 1 << k;

        vector<int> dp(mask, 0);
        for (int x : n) {
            dp[x] = x;
        }

        for (int j = 0; j<k; ++j) {
            for (int i = 0; i<mask; ++i) {
                if (i & (1<<j)) {
                    dp[i] = max(dp[i], dp[i ^ (1 << j)]);
                }
            }
        }

        long long ans = 0;
        for (int x : n) {
            int complement = (mask - 1) ^ x;
            ans = max(ans, 1LL * x * dp[complement]);
        }

        return ans;
    }
};