class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans=n;
        while(true){
            int ans=n;
            int a=1;
            while(ans>0){
                int x=ans%10;
                a*=x;
                ans/=10;
            }
            if(a%t==0) return n;
            n++;
        }
        return n;
    }
};