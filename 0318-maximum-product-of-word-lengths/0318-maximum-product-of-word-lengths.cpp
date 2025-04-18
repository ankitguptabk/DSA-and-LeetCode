class Solution {
public:
    int maxProduct(vector<string>& w) {
        int ans = 0;
        vector<int> mask(w.size(), 0);

        for (int i = 0; i < w.size(); i++) {
            for (char c : w[i]) {
                int pos = c - 'a';
                int power = 1;
                for (int k = 0; k < pos; k++) {
                    power *= 2;
                }
                int bit = (mask[i] / power) % 2;
                if (bit == 0) {
                    mask[i] += power;
                }
            }
        }

        for (int i = 0; i < w.size() - 1; i++) {
            for (int j = i + 1; j < w.size(); j++) {
                if ((mask[i] & mask[j]) == 0) {
                    ans = max(ans, (int)(w[i].size() * w[j].size()));
                }
            }
        }
        return ans;
    }
};
