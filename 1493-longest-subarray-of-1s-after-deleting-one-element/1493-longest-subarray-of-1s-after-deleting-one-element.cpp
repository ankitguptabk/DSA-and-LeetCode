class Solution {
public:
    int longestSubarray(vector<int>& n){
        int ans = 0, z = 0, o = 0, j = 0;
        for (int i = 0; i < (int)n.size(); ++i) {
            if (n[i] == 1) o++;
            else {
                z++;
                if (z == 1) j = i;
            }
            if (z <= 1){
                if (z == 0) {
                    ans = max(ans, o - 1);
                }
                else{
                    ans =max(ans, o);
                }
            }
            if (z > 1) {
                i = j;
                z = 0;
                o = 0;
            }
        }
        return ans;
    }
};
