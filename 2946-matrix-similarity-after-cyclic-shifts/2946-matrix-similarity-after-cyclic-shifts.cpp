class Solution {
public:
    bool areSimilar(vector<vector<int>>& m, int k) {
        vector<vector<int>>a=m;
        for(int i=0;i<m.size();i++){
            vector<int>x(m[0].size());
            for(int j=0;j<m[0].size();j++){
                 if(i%2==0) x[j]=m[i][(j+k)%m[0].size()];
                 else x[(j+k)%m[0].size()]=m[i][j];
            }
            for(int j=0;j<m[0].size();j++){
                m[i][j]=x[j];
            }
        }
        return a==m;
    }
};