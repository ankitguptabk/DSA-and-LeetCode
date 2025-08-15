class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        while(n!=1){
            if(n%4!=0) return false;
            double x=static_cast<double>(n)/4.00;
            int y=n/4;
            if(x!=static_cast<double>(y)) return false;
            n/=4;
        }
        return true;
    }
};