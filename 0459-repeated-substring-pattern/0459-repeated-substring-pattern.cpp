class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int length = s.length();
        for (int subLength = 1; subLength <= length / 2; ++subLength) {
            if (length % subLength == 0) {
                string pattern = s.substr(0, subLength);
                string constructedString = pattern;
                int repeatCount = length / subLength - 1;
                while (repeatCount--) {
                    constructedString += pattern;
                }
                if (constructedString == s) return true;
            }
        }
        return false;
    }
};
