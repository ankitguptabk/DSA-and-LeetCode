class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long ans=0;
        long long mod=1e9+7;
        long long x=k;
        long long c=0;
        for(int i=0;i<nums.size();i++){
            if(x>=nums[i]){
                x-=nums[i];
            }
            else{
                long long y=(nums[i]-x+k-1)/k;
                ans += (long long)(
                    (
                        ((__int128)(y + c) * (y + c + 1) / 2) -
                        ((__int128)c * (c + 1) / 2)
                    ) % mod
                );
                c+=y;
                ans = (ans%mod + mod)%mod;
                x=x + y*1LL*k-nums[i];
            }
        }
        ans%=mod;
        return (int)ans;
    }
};