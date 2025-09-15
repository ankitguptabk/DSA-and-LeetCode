class Solution {
public:
    int minArrivalsToDiscard(vector<int>& a, int w, int m) {
        int ans = 0;
        vector<bool> f(a.size(), false);
        unordered_map<int,int> map;
        for (int i=0; i < a.size(); i++) {
            int l=i - w;
            if (l>=0 && !f[l]) {
                map[a[l]]--;
            }
            map[a[i]]++;
            if (!f[i] && map[a[i]]>m) {
                f[i] = true;
                ans++;
                map[a[i]]--;
            }
        }
        return ans;
    }
};