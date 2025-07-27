class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& w, string p) {
        vector<string> ans;
        for (int i=0;i<w.size(); i++) {
            unordered_map<char,char>m,r;
            bool f =true;
            for (int j = 0; j < w[i].size(); j++) {
                if ((m.count(w[i][j]) && m[w[i][j]] != p[j])) {
                    f = false;
                    break;
                }
                m[w[i][j]] = p[j];
            }
            for (auto a:m) {
                    for (auto q:m) {
                        if ((q.second == a.second && q.first != a.first) ||
                            (q.first == a.first && q.second != a.second)) {
                            f = false;
                            break;
                        }
                    }
                    if (!f) break;
                
            }
            if(f) ans.push_back(w[i]);
        }
        return ans;
    }
};