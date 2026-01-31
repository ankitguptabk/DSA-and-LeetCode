class Solution {
public:
    int minimumK(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        while(true){
            long long ops=0;
            for(int num:nums){
                ops+=(num-1 +k)/k;

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