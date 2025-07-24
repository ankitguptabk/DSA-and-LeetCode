class Solution {
public:
    bool judgeSquareSum(int z) {
        for(long long x=0;x*x<=z;x++){
            long long y=z-x*x;
            long long a=sqrt(y);
            if(a*a==y) return true;
        }
        return false;
    }
};