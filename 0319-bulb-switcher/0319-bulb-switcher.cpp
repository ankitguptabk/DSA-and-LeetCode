class Solution {
public:
    int bulbSwitch(int n) {
        int ans=0;
        int l=0,r=n;
        while(l<=r){
            long long m=l+(r-l)/2;
            if(m*m<=n){
                ans=m;
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return ans;
    }
};