class Solution {
public:
    long long maxProfit(vector<int>& p, vector<int>& s, int k) {
        long long org = 0;
        int n = p.size();
        for (int i = 0; i < n; i++) {
            org += 1LL * p[i] * s[i];
        }
        long long ans=org;
        int x = k/2;

        long long sum = 0, z = 0;
        for (int j = 0; j < x; j++) {
            if (s[j] == -1) z += 1LL * p[j];
            else if (s[j] == 1) z -= 1LL * p[j];
        }
        for (int j = x; j < k; j++) {
            if (s[j] == -1) sum += 2LL * p[j];
            else if (s[j] == 0) sum += 1LL * p[j];
        }
        ans = max(ans, org + z + sum);

        for (int i = 1; i + k <= n; i++) {
            if (s[i - 1] == -1)  z -= 1LL * p[i - 1];
            else if (s[i - 1] == 1) z += 1LL * p[i - 1];

            if (s[i + x - 1] == -1) z += 1LL * p[i + x - 1];
            else if (s[i + x - 1] == 1) z -= 1LL * p[i + x - 1];

            if (s[i + x - 1] == -1) sum -= 2LL * p[i + x - 1];
            else if (s[i + x - 1] == 0) sum -= 1LL * p[i + x - 1];
            if (s[i + k - 1] == -1) sum += 2LL * p[i + k - 1];
            else if (s[i + k - 1] == 0) sum += 1LL * p[i + k - 1];

            ans = max(ans, org + z + sum);
        }

        return ans;
    }
};
