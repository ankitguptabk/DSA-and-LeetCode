class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& c, int e) {
        int n = c.size();
        vector<double> r(n);
        for (int i = 0; i < n; i++) r[i] = (double)c[i][0] / c[i][1];

        auto g = [&](int i) {
            return (double)(c[i][0] + 1) / (c[i][1] + 1) - r[i];
        };
        priority_queue<pair<double, int>> pq;
        for (int i = 0; i < n; i++) pq.push({g(i), i});
        while (e--) {
            auto [x, i] = pq.top();
            pq.pop();
            c[i][0]++;
            c[i][1]++;
            r[i] = (double)c[i][0] / c[i][1];
            pq.push({g(i), i});
        }
        double ans = 0;
        for (double x : r){
            ans+=x;
        }
        return ans / n;
    }
};
