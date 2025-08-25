class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat){
        int row =mat.size();
        int col =mat[0].size();
        vector<int> ans;

        int r=0, c=0;
        bool upward = true;

        while(ans.size()<row*col){
            ans.push_back(mat[r][c]);
            if(upward){

                if(c == col - 1){
                    r++;
                    upward = false;
                }
                else if(r == 0){
                    c++;
                    upward = false;
                }
                else{
                    r--;
                    c++;
                }

            }
            else{

                if(r == row - 1){
                    c++;
                    upward = true;
                }
                else if(c == 0){
                    r++;
                    upward = true;
                }
                else{
                    r++;
                    c--;
                }
            }
        }

        return ans;
    }
};
