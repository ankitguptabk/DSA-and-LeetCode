class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freq(128, 0);
        for (char c:t) freq[c]++;

        int left =0;
        int start =0;
        int minLen =INT_MAX;
        int need =t.size();

        for (int right=0;right<s.size();right++) {

            if (freq[s[right]]>0)
                need--;

            freq[s[right]]--;

            while (need==0) {

                if (right-left+1<minLen) {
                    minLen = right-left+1;
                    start = left;
                }
                freq[s[left]]++;

                if (freq[s[left]]>0)
                    need++;
                left++;
            }
        }
        if (minLen==INT_MAX) return "";
        return s.substr(start, minLen);
    }
};