class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int ans=0;
        unordered_map<string,int>m;
        for(auto &row:matrix){
            string pattern="", inverse="";
            for(int x:row){
                pattern+=(x+'0');
                inverse+=((x^1)+'0');
            }
            m[pattern]++, m[inverse]++;
            ans=max(ans,m[pattern]);
            ans=max(ans,m[inverse]);
        }
        return ans;
    }
};