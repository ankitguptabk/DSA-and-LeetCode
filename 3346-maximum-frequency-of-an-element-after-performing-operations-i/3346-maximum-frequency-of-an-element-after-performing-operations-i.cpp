class Solution {
public:
    int maxFrequency(vector<int>& n, int k, int m) {
        unordered_map<int, int> r;
        unordered_map<int, int> f;
        int a = INT_MAX;
        int b = INT_MIN;
        for (int i = 0; i < n.size(); i++) {
            f[n[i]]++;
            int l = n[i] - k;
            int u = n[i] + k;
            a = min(a, l);
            b = max(b, u);
            r[l]++;
            r[u + 1]--;
        }
        int x = 1;
        for (int i = a; i <= b; i++) {
            r[i] += r[i - 1];
            int c = f[i];
            int d = r[i] - f[i];
            d = min(d, m);
            x = max(x, c + d);
        }
        return x;
    }
};
