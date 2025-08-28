class Solution {
public:
    int countBattleships(vector<vector<char>>& b) {
        int ans=0;
        for(int i=0;i<b.size();i++){
            for(int j=0;j<b[0].size();j++){
                if(b[i][j]=='X' && i+1<b.size() && b[i+1][j]=='.' && j+1<b[0].size() && b[i][j+1]=='.'){
                    ans++;
                }
                else if(i==b.size()-1 && j==b[0].size()-1 && b[i][j]=='X'){
                    ans++;
                }
                else if(i==b.size()-1 && b[i][j]=='X' && b[i][j+1]=='.') ans++;
                else if(j==b[0].size()-1 && b[i][j]=='X' && b[i+1][j]=='.') ans++;
            }
        }
        return ans;
    }
};