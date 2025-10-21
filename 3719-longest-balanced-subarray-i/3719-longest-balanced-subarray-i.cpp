class Solution {
public:
    int longestBalanced(vector<int>& n) {
        int ans = 0;
        for (int i = 0; i < n.size(); i++) {
            vector<int> e, o;
            for (int j = i; j < n.size(); j++) {
                bool isEven = (n[j] % 2 == 0);
                if (isEven) {
                    if (find(e.begin(), e.end(), n[j]) == e.end()) {
                        e.push_back(n[j]);
                    }
                } else {
                    if (find(o.begin(), o.end(), n[j]) == o.end()) {
                        o.push_back(n[j]);
                    }
                }
                if (e.size()==o.size()) {
                    ans = max(ans, j -i+1);
                }
            }
        }
        return ans;
    }
};