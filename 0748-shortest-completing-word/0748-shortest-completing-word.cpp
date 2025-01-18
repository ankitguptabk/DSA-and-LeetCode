class Solution {
public:
    string shortestCompletingWord(string l, vector<string>& w) {
        string c = "";
        vector<string> x = w;
        for (int i = 0; i < l.size(); i++) {
            if (isalpha(l[i])){
                c+=tolower(l[i]);
            }
        }
        sort(c.begin(), c.end());
        for (int i = 0; i < w.size(); i++) {
            sort(w[i].begin(), w[i].end());
        }
        int n=INT_MAX;
        string ans="";

        for (int i = 0; i< w.size(); i++) {
            int ci = 0, wi = 0;
            while (ci < c.size() && wi < w[i].size()) {
                if (c[ci] == w[i][wi]) {
                    ci++;
                }
                wi++;
            }
            if (ci == c.size() && w[i].size() < n) {
                ans = w[i];
                n = w[i].size();
            }
        }
        int k = 0;
        for(int i = 0; i < w.size(); i++) {
            string temp = w[i];
            sort(temp.begin(), temp.end());
            if (temp==ans) {
                k = i;
                break;
            }
        }
        return x[k];
    }
};
