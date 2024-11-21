class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if (nums.empty()) return 0;
        int maxNum = *max_element(nums.begin(), nums.end());
        vector<int> points(maxNum + 1, 0);
        for (int num : nums) {
            points[num] += num;
        }
        int take = 0, skip = 0;
        for (int i = 0; i <= maxNum; i++) {
            int take_i = skip + points[i];
            int skip_i = max(skip, take);
            take = take_i;
            skip = skip_i;
        }
        return max(take, skip);
    }
};