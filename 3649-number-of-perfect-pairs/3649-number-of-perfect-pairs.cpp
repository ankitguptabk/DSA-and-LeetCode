class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        vector<int> num(n);
        for (int i = 0; i < n; i++) {
            num[i] = abs(nums[i]);
        }
        sort(num.begin(), num.end());
        int j = n-2;
        for (int i = n - 1; i >= 0; i--) {
            while (j >= 0 && num[i]-num[j]<=num[j]) {
                j--;
            }
            ans += i-j-1;
        }

        return ans;
    }
};
