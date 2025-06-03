class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& g, int k) {
        while(k--){
            vector<vector<int>>temp=g;
            for(int i=0;i<g.size();i++){
                for(int j=0;j<g[0].size();j++){
                    if(i == g.size()-1 && j == g[0].size()-1) {
                        g[0][0]=temp[i][j];
                    }
                    else if(j == g[0].size()-1) {
                        g[i+1][0]=temp[i][j];
                    }
                    else{
                        g[i][j+1]=temp[i][j];
                    }
                }
            }
        }
        return g;
    }
};