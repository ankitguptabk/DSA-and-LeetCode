class Solution {
public:
    int maxContainers(int n, int w, int m) {
        int x=n*n;
        int y=m/w;
        if(y<x) return y;
        return x;
    }
};