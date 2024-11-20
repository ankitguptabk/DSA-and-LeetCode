class Solution {
public:
    int romanToInt(string s) {
        int i=0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'I') {
                if (j + 1 < s.size() && (s[j + 1] == 'V' || s[j + 1] == 'X')) i -= 1;
                else i += 1;
            }
            else if (s[j] == 'V') {
                i += 5;
            }
            else if (s[j] == 'X') {
                if (j + 1 < s.size() && (s[j + 1] == 'L' || s[j + 1] == 'C')) i -= 10;
                else i += 10;
            }
            else if (s[j] == 'L') {
                i += 50;
            }
            else if (s[j] == 'C') {
                if (j + 1 < s.size() && (s[j + 1] == 'D' || s[j + 1] == 'M')) i -= 100;
                else i += 100;
            }
            else if (s[j] == 'D') {
                i += 500;
            }
            else if (s[j] == 'M') {
                i += 1000;
            }
        }
        return i;
    }
};