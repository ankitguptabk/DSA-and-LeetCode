class Solution {
public:
    int minimumK(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        while(true){
            long long ops=0;
            for(int num:nums){
                if(num%k==0){
                    ops+=num/k;
                }
                else ops+=num/k+1;

                if(ops>1LL*k*k) break;
            }
            if(ops<= 1LL*k*k){
                return k;
            }
            k++;
        }
        return 1;
    }
};