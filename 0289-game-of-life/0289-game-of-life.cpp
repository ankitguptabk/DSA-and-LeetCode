class Solution {
public:
    void gameOfLife(vector<vector<int>>& b) {
        vector<vector<int>>next=b;
        for(int i=0;i<b.size();i++){
            for(int j=0;j<b[0].size();j++){
                int l=0;
                if(j-1>=0 && b[i][j-1]==1) l++;
                if(j+1<b[0].size() && b[i][j+1]==1) l++;
                if(i-1>=0 && b[i-1][j]==1) l++;
                if(i+1<b.size() && b[i+1][j]==1) l++;
                if(i-1 >=0 && j-1>=0 && b[i-1][j-1]==1) l++;
                if(i-1 >=0 && j+1<b[0].size() && b[i-1][j+1]==1) l++;
                if(i+1 <b.size() && j-1>=0 && b[i+1][j-1]==1) l++;
                if(i+1 <b.size() && j+1<b[0].size() && b[i+1][j+1]==1) l++;

                if(((l<2 || l>3) && b[i][j]==1)){
                    next[i][j]=0;
                }
                if((l==2 || l==3) && b[i][j]==1){
                    next[i][j]==1;
                }
                if(l==3 && b[i][j]==0){
                    next[i][j]=1;
                }
            }
        }
        b.swap(next);
    }
};