class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& w) {
        vector<vector<string>> ans;
        int n=w.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j==i) continue;
                for (int k = 0; k < n; k++) {
                    if (k==i || k ==j) continue;
                    for (int l = 0; l < n; l++) {
                        if (l == i || l == j || l == k) continue;

                        string top = w[i];
                        string left = w[j];
                        string right = w[k];
                        string bottom = w[l];
                        if (top[0] == left[0] &&
                            top[3] == right[0] &&
                            bottom[0] == left[3] &&
                            bottom[3] == right[3]) {
                            ans.push_back({top, left, right, bottom});
                        }
                    }
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
