class Solution {
public:
    long maxPoints(vector<vector<int>>& grid) {
        int numRows = grid.size();
        int numCols = grid[0].size();
        vector<long> score(numCols, 0);
        long maxScore = 0;
        
        for (int row = 0; row < numRows; ++row) {
            for (int col = 0; col < numCols; ++col) {
                score[col] += grid[row][col];
            }
            
            for (int col = 1; col < numCols; ++col) {
                score[col] = max(score[col], score[col - 1] - 1);
            }
            
            for (int col = numCols - 2; col >= 0; --col) {
                score[col] = max(score[col], score[col + 1] - 1);
            }
        }
        
        for (int col = 0; col < numCols; ++col) {
            maxScore = max(maxScore, score[col]);
        }
        
        return maxScore;
    }
};
