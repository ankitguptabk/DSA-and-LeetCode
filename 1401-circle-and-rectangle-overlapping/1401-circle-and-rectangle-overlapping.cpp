class Solution {
public:
    bool checkOverlap(int r, int x, int y, int x1, int y1, int x2, int y2) {
        int min_p_x=max(x1,min(x,x2)); //closest rec point
        int min_p_y=max(y1,min(y,y2));
        int dx=min_p_x-x;
        int dy=min_p_y-y;
        int distance=sqrt(dx*dx+dy*dy);
        return distance<=r;
    }
};