class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& m, int r, int c) {
        vector<int>a;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                a.push_back(m[i][j]);
            }
        }
        vector<vector<int>>ans(r,vector<int>(c));
        if(r*c!=a.size()) return m;
        int k=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j]=a[k];
                k++;
            }
        }
        return ans;
    }
};