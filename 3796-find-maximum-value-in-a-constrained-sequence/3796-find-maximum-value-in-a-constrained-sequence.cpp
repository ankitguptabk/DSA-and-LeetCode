class Solution {
public:
    int findMaxVal(int n, vector<vector<int>>& restrictions, vector<int>& diff) {
        int ans=0;
        int m=restrictions.size();
        vector<int>a(n,0);
        vector<bool>maxi(n,false);
        for(int i=0;i<m;i++){
            a[restrictions[i][0]]=restrictions[i][1];
            maxi[restrictions[i][0]]=true;
        }
        for(int i=1;i<n;i++){
            int val = diff[i - 1] + a[i - 1];
            if (maxi[i]) {
                a[i] = min(val, a[i]);
            }
            else {
                a[i] =val;
            }
        }
        for (int i = n - 2; i >= 0; i--) {
            a[i] = min(a[i], a[i + 1]+diff[i]);
        }
        for (int i = 0; i < n; i++) {
            ans = max(ans, a[i]);
        }
        return ans;
    }
};