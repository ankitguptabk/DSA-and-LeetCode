class Solution {
public:
    int minOperations(vector<int>& n) {
        vector<int> s; 
        int ans = 0;
        for (int a:n) {
            while (!s.empty() && s.back() > a){
                s.pop_back();
            }
            if (a==0) continue;
            if (s.empty() || s.back()<a) {
                ans++;
                s.push_back(a);
            }
        }
        return ans;
    }
};
