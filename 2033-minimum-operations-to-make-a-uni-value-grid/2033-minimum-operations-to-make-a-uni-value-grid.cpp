class Solution {
public:
    int minOperations(vector<vector<int>>& g, int x) {
        int ans=0;
        vector<int>a;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                a.push_back(g[i][j]);
            }
        }
        for (int i = 0; i<a.size(); i++) {
            if((a[i]-a[0])% x!=0) {
                return -1;
            }
        }
        sort(a.begin(),a.end());
        int mid=a[a.size()/2];
        for(int i=0;i<a.size();i++){
            ans+=abs(a[i]-mid)/x;
        }
        return ans;
    }
};