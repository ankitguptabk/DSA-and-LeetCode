class Solution {
public:
    int minimumK(vector<int>& nums) {
        int n=nums.size();
        int l=1, r=100000;
        int ans=INT_MAX;
        while(l<=r){
            int k=l+(r-l)/2;
            long long ops=0, limit=1LL*k*k;
            for(int num:nums){
                ops+=(num-1 +k)/k;
                if(ops>limit) break;
            }
            if(ops<= limit){
                ans=k;
                r=k-1;
            }
            else{
                l=k+1;
            }
            k++;
        }
        return ans;
    }
};