class Solution {
public:
    bool isZeroArray(vector<int>& n, vector<vector<int>>& q) {
        int s = n.size();
        vector<int> d(s+1, 0);
        for(auto& it : q) {
            d[it[0]]++;
            d[it[1]+1]--;
        }
        int c = 0;
        for(int i = 0; i < s; i++) {
            c += d[i];
            if(c < n[i]) return false;
        }
        return true;
    }
};
