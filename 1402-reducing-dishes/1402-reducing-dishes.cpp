class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(), s.end());
        int n = s.size();
        int ans = 0;
        int sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (sum + s[i] > 0) {
                sum += s[i];
                ans += sum;
            }
        }

        return ans;
    }
};