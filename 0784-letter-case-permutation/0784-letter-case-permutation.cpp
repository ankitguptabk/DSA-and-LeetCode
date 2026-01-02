class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        ans.push_back(s);
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= 'A' && s[i] <= 'Z')) {

                int size = ans.size();
                for (int j = 0; j < size; j++) {
                    string curr = ans[j];

                    if (curr[i] >= 'a' && curr[i] <= 'z') curr[i] = curr[i] - 'a'+'A';
                    else curr[i] = curr[i] - 'A' + 'a';
                    ans.push_back(curr);
                }
            }
        }
        return ans;
    }
};
