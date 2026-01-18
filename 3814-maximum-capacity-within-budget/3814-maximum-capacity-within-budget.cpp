class Solution {
public:
    int maxCapacity(vector<int>& c, vector<int>& cap, int b) {
        int n = c.size();
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++){
            v.push_back({c[i], cap[i]});
        }

        sort(v.begin(), v.end());
        vector<int> pref(n);

        pref[0] = v[0].second;

        for (int i = 1; i < n; i++){
            pref[i] = max(pref[i - 1], v[i].second);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int rem = b - v[i].first;
            if (rem <= 0) continue;

            ans = max(ans, v[i].second);

            int low = 0, high = i - 1, ind = -1;

            while (low <= high) {
                int mid = (low + high) / 2;
                if (v[mid].first < rem) {
                    ind = mid;
                    low = mid + 1;
                }
                else high = mid - 1;
            }
            
            if (ind != -1) ans = max(ans, v[i].second + pref[ind]);
        }
        return ans;
    }
};