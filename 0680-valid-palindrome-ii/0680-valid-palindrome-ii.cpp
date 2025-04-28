class Solution {
public:
    bool palindrome(string& s, int left, int right) {
        for(int i=left, j=right; i<j; i++, j--) {
            if(s[i]!=s[j]) return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        for(int i = 0; i < s.size()/2; i++) {
            if(s[i] != s[s.size()-1-i]) {
                return palindrome(s, i+1, s.size()-1-i) || palindrome(s, i, s.size()-2-i);
            }
        }
        return true;
    }
};
