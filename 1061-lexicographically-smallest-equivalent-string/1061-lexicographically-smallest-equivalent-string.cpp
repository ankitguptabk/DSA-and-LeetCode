class Solution {
public:
    string smallestEquivalentString(string a, string b, string c) {

        vector<vector<char>> x;

        for (int i = 0; i < a.size(); i++) {
            set<char> s;
            s.insert(a[i]);
            s.insert(b[i]);
            x.push_back(vector<char>(s.begin(), s.end()));
        }

        bool changed = true;
        while (changed) {
            changed = false;
            for (int i = 0; i < x.size(); i++) {
                for (int j = i + 1; j < x.size(); ) {
                    bool merged = false;
                    for (char p : x[i]) {
                        for (char q : x[j]) {
                            if (p == q) {
                                for (char ch : x[j])
                                    x[i].push_back(ch);
                                merged = true;
                                break;
                            }
                        }
                        if (merged) break;
                    }
                    if (merged) {
                        x.erase(x.begin() + j);
                        changed = true;
                    }
                    else {
                        j++;
                    }
                }
            }
        }
        for (int i = 0; i < x.size(); i++) {
            set<char> s(x[i].begin(), x[i].end());
            x[i] = vector<char>(s.begin(), s.end());
        }
        string ans = "";
        for (char ch : c) {
            bool found = false;
            for (auto &grp : x) {
                if (find(grp.begin(), grp.end(), ch) != grp.end()) {
                    ans += grp[0];
                    found = true;
                    break;
                }
            }
            if (!found) ans += ch;
        }
        return ans;
    }
};