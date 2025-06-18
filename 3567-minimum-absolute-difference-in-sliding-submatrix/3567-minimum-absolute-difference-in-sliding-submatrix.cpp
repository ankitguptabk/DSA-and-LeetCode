class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& g, int k) {
        vector<vector<int>> ans;
        for(int i = 0; i <= g.size() - k; i++) {
            vector<int> rowmin;
            for(int j = 0; j <= g[0].size() - k; j++) {
                unordered_set<int> s;
                for(int row = 0; row < k; row++) {
                    for(int col = 0; col < k; col++) {
                        s.insert(g[i + row][j + col]);
                    }
                }
                vector<int> values(s.begin(), s.end());
                sort(values.begin(), values.end());
                int min = INT_MAX;
                for(int x = 1; x < values.size(); x++) {
                    min = std::min(min, values[x] - values[x - 1]);
                }
                if(values.size() <= 1) min = 0;
                rowmin.push_back(min);
            }
            ans.push_back(rowmin);
        }
        return ans;
    }
};
