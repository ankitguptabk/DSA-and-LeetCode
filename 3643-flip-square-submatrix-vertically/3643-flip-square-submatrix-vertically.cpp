class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& g, int x, int y, int k) {
        for(int i=0;i<k/2;i++){
            for(int j=0;j<k;j++){
                swap(g[x+i][y+j],g[x+k-1-i][y+j]);
            }
        }
        return g;
    }
};