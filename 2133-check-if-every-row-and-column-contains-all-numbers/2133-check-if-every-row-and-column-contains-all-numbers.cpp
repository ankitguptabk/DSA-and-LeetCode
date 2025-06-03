class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        for(int i=0;i<m.size();i++){
            vector<int>x;
            for(int j=0;j<m.size();j++){
                x.push_back(m[i][j]);
            }
            sort(x.begin(),x.end());
            for(int i=0;i<x.size()-1;i++){
                if(x[i]==x[i+1]) return false;
            }
        }
        for(int i=0;i<m.size();i++){
            vector<int>x;
            for(int j=0;j<m.size();j++){
                x.push_back(m[j][i]);
            }
            sort(x.begin(),x.end());
            for(int i=0;i<x.size()-1;i++){
                if(x[i]==x[i+1]) return false;
            }
        }
        return true;
    }
};