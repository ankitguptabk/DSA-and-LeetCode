class Solution {
public:
    bool isValid(string s) {
        stack<char> charac;
        for (auto x : s) {
            charac.push(x);
            if (charac.size() >= 3) {
                char c=charac.top();
                charac.pop();
                char b=charac.top();
                charac.pop();
                char a=charac.top();
                charac.pop();
                if (a != 'a'|| b !='b' || c != 'c') {
                    charac.push(a);
                    charac.push(b);
                    charac.push(c);
                }
            }
        }
        return charac.empty();
    }
};
