class Solution {
public:
    bool checkGoodInteger(int n) {
        long long a=0, b=0;
        while(n>0){
            int x=n%10;
            a+=x;
            b+= x*x;
            n=n/10;
        }
        return b-a>=50;
    }
};