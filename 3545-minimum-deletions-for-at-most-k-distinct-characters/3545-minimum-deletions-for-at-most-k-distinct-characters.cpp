class Solution {
public:
    int minDeletion(string s, int k) {
        sort(s.begin(),s.end());
        vector<int>m;
        int x=1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                x++;
            }
            else{
                m.push_back(x);
                x = 1;
            }
        }
        m.push_back(x);
        sort(m.begin(), m.end());
        int a = 0;
        int b = m.size() - k;
        for (int i = 0;i<b; i++) {
            a += m[i];
        }
        return a;
    }
};
