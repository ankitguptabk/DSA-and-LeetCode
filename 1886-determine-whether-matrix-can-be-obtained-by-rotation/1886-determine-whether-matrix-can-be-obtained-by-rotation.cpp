class Solution {
public:
    bool findRotation(vector<vector<int>>& m, vector<vector<int>>& t) {
        int x=0;
        while(x<4 || m==t){
            if(m==t) return true;
            vector<vector<int>>tempo=m;
            for(int i=0;i<m.size();i++){
                for(int j=0;j<m[0].size();j++){
                    m[i][j]=tempo[m[0].size()-1-j][i];
                }
            }
            x++;
        }
        return false;
    }
};