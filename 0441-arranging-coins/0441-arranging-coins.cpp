class Solution {
public:
    int arrangeCoins(int n) {
        int ans=0;
        int i=1;
        while(n>0){
            n-=i;
            if(n>=0) ans++;
            i++;
        }
        return ans;
    }
};