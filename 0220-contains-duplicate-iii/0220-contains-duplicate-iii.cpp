class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& n, int ind, int v) {
        if(v < 0) return false;
        set<long long> s;
        for (int i = 0; i < n.size(); i++) {
            auto it = s.lower_bound((long long)n[i] - v);
            if (it != s.end() && *it - n[i] <=v) return true;
            s.insert(n[i]);
            if (i >=ind) {
                s.erase(n[i - ind]);
            }
        }
        return false;
    }
};
