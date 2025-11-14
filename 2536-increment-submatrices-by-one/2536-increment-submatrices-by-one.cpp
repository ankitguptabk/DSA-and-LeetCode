class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& q) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        for(int i=0;i<q.size();i++){
            int a=q[i][0], b=q[i][1],c=q[i][2],d=q[i][3];
            for(int j=a;j<=c;j++){
                for(int k=b;k<=d;k++){
                    ans[j][k]+=1;
                }
            }
        }
        return ans;
    }
};