class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        int n = p.size(), ans = 0;
        if (n < 3) return n;
        for (int i = 0; i < n; i++) {
            unordered_map<double,int> m;
            int dup = 1, vert = 0;
            for (int j = i + 1; j < n; j++) {
                if (p[i][0] == p[j][0] && p[i][1] == p[j][1]) dup++;
                else if (p[i][0] == p[j][0]) vert++;
                else m[(double)(p[i][1]-p[j][1])/(double)(p[i][0]-p[j][0])]++;
            }
            int mx = vert;
            for (auto const &p : m){
                mx = max(mx, p.second);
            }
            ans = max(ans, mx + dup);
        }
        return ans;
    }
};
