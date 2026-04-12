class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                c+=matrix[i][j];
            }
            ans.push_back(c);
        }
        return ans;
    }
};