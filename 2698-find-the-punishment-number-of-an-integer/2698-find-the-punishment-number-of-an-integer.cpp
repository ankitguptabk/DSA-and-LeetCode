class Solution {
public:

    bool pos(int num, int target) {
        if (target<0 || num <target) return false;
        if (num == target) return true;

        return pos(num /10, target - num %10) ||
               pos(num /100, target - num %100) ||
               pos(num /1000, target - num %1000);
    }

    int punishmentNumber(int n) {
        long long ans=1;
        for (int i = 2; i <= n; i++) {
            int sq = i*i;
            if (pos(sq,i)) {
                ans+=sq;
            }
        }
        return ans;
    }
};
