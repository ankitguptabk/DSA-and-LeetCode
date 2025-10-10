class Solution {
public:
    long long coloredCells(int num) {
        long long ans=0;
        long long n=(long long)num;
        // 2*n^2-2*n+1;
        ans=2*(n*n)- 2*n +1;
        return ans;
    }
};