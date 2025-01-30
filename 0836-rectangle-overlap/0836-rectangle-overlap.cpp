class Solution {
public:
    bool isRectangleOverlap(vector<int>& r, vector<int>& rec) {
        if((r[2]<=rec[0]) || (r[3]<=rec[1]) || (r[0]>=rec[2]) || (r[1]>=rec[3])){
            return false;
        }
        return true;
    }
};