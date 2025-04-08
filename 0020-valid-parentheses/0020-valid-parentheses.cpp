class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) return false;
        vector<char> stack;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push_back(c);
            }
            else if (c == ')' || c == '}' || c == ']') {
                if (stack.empty()) return false;
                char lastOpen = stack.back();
                stack.pop_back();
                if ((lastOpen == '(' && c != ')') ||(lastOpen == '{' && c != '}') ||(lastOpen == '[' && c != ']')) {
                    return false;
                }
            }
        }
        return stack.empty();
    }
};