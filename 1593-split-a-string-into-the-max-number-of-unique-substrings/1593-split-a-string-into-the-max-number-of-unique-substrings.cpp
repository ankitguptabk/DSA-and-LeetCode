class Solution {
public:
    int solve(string &s, int idx, unordered_set<string>&a) {
        if (idx == s.size()) return 0;
        string x ="";
        int ans = 0;
        for (int i = idx;i<s.size();i++) {
            x += s[i];
            if (a.find(x)==a.end()) {
                a.insert(x);
                ans = max(ans, 1+solve(s,i+1,a));
                a.erase(x);
            }
        }
        return ans;
    }
    int maxUniqueSplit(string s) {
        unordered_set<string>a;
        return solve(s,0,a);
    }
};
