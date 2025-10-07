class Solution {
public:
    int minMutation(string s, string e, vector<string>& b) {
        if(s == e) return 0;
        vector<bool> used(b.size(), false);
        vector<pair<string,int>> q;
        q.push_back({s, 0});

        for(int f=0;f<q.size(); f++) {
            string cur = q[f].first;
            int steps = q[f].second;

            for(int i=0;i<b.size();i++) {
                if(used[i]) continue;

                int diff = 0;
                for(int j = 0; j < 8; j++) {
                    if(cur[j] != b[i][j]) diff++;
                }
                if(diff == 1) {
                    if(b[i] == e) return steps + 1;
                    q.push_back({b[i], steps + 1});
                    used[i] = true;
                }
            }
        }
        return -1;
    }
};
