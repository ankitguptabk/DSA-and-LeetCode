class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& point) {
        int n=point.size();
        int manhattan=INT_MAX;
        for(int i=0; i<n; i++){
            int x1=point[i][0], y1=point[i][1];
            if(x1==x || y1==y) {
                int dist= abs(x1-x)+abs(y1-y);
                manhattan= min(manhattan, dist);
            }
        }
        for(int i=0;i<n;i++){
            int x1=point[i][0], y1=point[i][1];
            if(x1==x || y1==y) {
                int dist= abs(x1-x)+abs(y1-y);
                if(dist==manhattan) return i;
            }
        }
        return -1;
    }
};