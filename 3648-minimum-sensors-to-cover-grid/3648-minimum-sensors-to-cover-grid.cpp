class Solution {
public:
    int minSensors(int n, int m, int k) {
        int cell_cover=2*k+1;
        int row_len=static_cast<int>(ceil((static_cast<float>(n))/static_cast<float>(cell_cover)));
        int col_len=static_cast<int>(ceil((static_cast<float>(m))/static_cast<float>(cell_cover)));
        int arr_sense=row_len*col_len;
        return arr_sense;
    }
};