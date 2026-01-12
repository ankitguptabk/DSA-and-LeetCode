class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        int result = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            int left = -1, right = -1;
            for (int i = 0; i < n; i++) {
                if (s[i] == c) {
                    if (left == -1) left = i;
                    right = i;
                }
            }

            if (left == -1 ||left == right) continue;

            bool mid[26] = {false};
            for (int i = left + 1; i < right; i++) {
                mid[s[i] - 'a'] = true;
            }
            for (int k = 0; k < 26; k++) {
                if (mid[k]) result++;
            }
        }
        return result;
    }
};