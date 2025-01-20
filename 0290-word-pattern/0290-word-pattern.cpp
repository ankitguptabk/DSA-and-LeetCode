class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<char> c;
        vector<string> str;
        for (int i = 0; i < p.size(); i++) {
            if (find(c.begin(), c.end(), p[i]) == c.end()) c.push_back(p[i]);
        }
        string temp = "";
        for (char ch : s) {
            if (ch == ' ') {
                str.push_back(temp);
                temp = "";
            }
            else {
                temp += ch;
            }
        }
        if (!temp.empty()) str.push_back(temp);
        if (p.size() != str.size()) return false;

        vector<string> y;
        for (int i = 0; i <str.size(); i++) {
            if (find(y.begin(), y.end(), str[i]) == y.end()) y.push_back(str[i]);
        }

        unordered_map<char, string> m;
        if (c.size() != y.size()) return false;

        for (int i=0;i<c.size(); i++) m[c[i]] = y[i];

        for (int i = 0; i < p.size(); i++) {
            if (m[p[i]] != str[i]) return false;
        }
        return true;
    }
};
