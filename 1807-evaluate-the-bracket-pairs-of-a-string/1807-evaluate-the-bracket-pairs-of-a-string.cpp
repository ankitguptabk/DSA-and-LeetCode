class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        string x = "";
        vector<string> ans;
        unordered_map<string,string>m;
        for (int i = 0; i < k.size(); i++) {
            m[k[i][0]] = k[i][1];
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (!x.empty()) {
                    ans.push_back(x);
                    x = "";
                }
                i++;
                while (i < s.size() && s[i] != ')') {
                    x += s[i];
                    i++;
                }
                ans.push_back(x + "-");
                x = "";
            } else {
                x += s[i];
            }
        }
        if (!x.empty()) ans.push_back(x);
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i].back() == '-') {
                string y=ans[i].substr(0, ans[i].size() - 1);
                if(m.count(y)){
                    ans[i]=m[y];
                }
                else ans[i]="?";
            }
        }
        string a = "";
        for (int i = 0; i < ans.size(); i++) {
            a += ans[i];
        }
        return a;
    }
};