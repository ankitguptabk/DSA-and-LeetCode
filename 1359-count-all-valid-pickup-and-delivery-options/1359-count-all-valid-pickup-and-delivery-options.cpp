class Solution {
public:
    int countOrders(int n) {
        int ans=1;
        long long m=1e9+7;
        for(int k=1;k<=n;k++){
            ans=(ans*(((2*k-1)*k)%m))%m;
            ans%=m;
        }
        return ans;
    }
};