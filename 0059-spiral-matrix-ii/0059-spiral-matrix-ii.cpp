class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,-1));
        int x=1;
        int i=0,j=0;
        while(x<=n*n){
            while(j<n && ans[i][j]==-1){
                ans[i][j]=x++;
                j++;
            }
            j--,i++;
            while(i<n && ans[i][j]==-1){
                ans[i][j]=x++;
                i++;
            }
            i--,j--;
            while(j>=0 && ans[i][j]==-1){
                ans[i][j]=x++;
                j--;
            }
            j++,i--;
            while(i>=0 && ans[i][j]==-1){
                ans[i][j]=x++;
                i--;
            }
            i++,j++;
        }
        return ans;
    }
};