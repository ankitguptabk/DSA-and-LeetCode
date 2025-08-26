class Solution { 
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int a = 0;
        double di = 0;
        for (int i = 0; i < d.size(); i++) {
            double x = sqrt(d[i][0] * d[i][0] + d[i][1] * d[i][1]);
            if (di < x) {
                di = x;
                a = i;
            }
            else if (di == x && (d[i][0] * d[i][1] > d[a][0] * d[a][1])) {
                a = i;
            }
        }
        return d[a][0] * d[a][1];
    }
};