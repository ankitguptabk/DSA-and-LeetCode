class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = LLONG_MAX;
        ans = min(ans,1LL * need1 * cost1 +1LL * need2 * cost2);
        if (costBoth <= cost1 + cost2) {
            long long took = min(need1, need2);
            ans = min(ans,took * costBoth +1LL * (need1 - took) * cost1 +1LL * (need2 - took) * cost2);
        }
        ans = min(ans,1LL * costBoth * max(need1, need2));
        return ans;
    }
};