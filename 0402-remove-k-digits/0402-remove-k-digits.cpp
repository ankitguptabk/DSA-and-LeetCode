class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> st;
        for (char digit:num) {
            while (!st.empty() && k > 0 && st.back()>digit) {
                st.pop_back();
                k--;
            }
            st.push_back(digit);
        }
        while (k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }
        string result;
        for (char digit : st) {
            if (!(result.empty() && digit == '0')) {
                result += digit;
            }
        }
        if(result.empty()) return "0";
        else return result;
    }
};
