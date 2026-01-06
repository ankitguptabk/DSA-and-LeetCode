class Solution {
public:
    vector<int> diffWaysToCompute(string e) {
        vector<int> ans;
        int n = e.size();

        for (int i = 0; i < n; i++) {
            char op = e[i];
            if (op =='+'|| op=='-' || op =='*') {
                string leftStr = e.substr(0, i);
                string rightStr = e.substr(i + 1);

                vector<int> left = diffWaysToCompute(leftStr);
                vector<int> right = diffWaysToCompute(rightStr);

                for (int a : left) {
                    for (int b : right) {
                        if (op == '+') ans.push_back(a + b);
                        else if (op == '-') ans.push_back(a - b);
                        else ans.push_back(a * b);
                    }
                }
            }
        }
        if (ans.empty()) {
            ans.push_back(stoi(e));
        }
        return ans;
    }
};