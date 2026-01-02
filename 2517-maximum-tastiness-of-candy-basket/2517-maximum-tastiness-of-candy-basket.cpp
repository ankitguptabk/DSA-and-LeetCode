class Solution {
public:
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        int l = 0;
        int r = price.back()-price.front();

        while (l<r) {
            int m = (l + r + 1) / 2;
            int cnt = 1;
            int j = 0;

            for (int i = 1; i < price.size(); i++) {
                if (price[i] - price[j] >= m) {
                    cnt++;
                    j = i;
                }
            }
            if (cnt >= k)
                l = m;
            else
                r = m - 1;
        }
        return l;
    }
};