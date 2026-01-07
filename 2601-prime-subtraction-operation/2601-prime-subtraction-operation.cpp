class Solution {
public:
    bool prime(int a){
        if(a<2) return false;
        for(int i=2;i*i<=a;i++){
            if(a%i==0) return false;
        }
        return true;
    }
    bool primeSubOperation(vector<int>& nums) {
        int n=nums.size();
        int prev=0;
        for(int i=0;i<n;i++){
            bool change=false;
            for(int p=nums[i]-1;p>=0;p--){
                if(prime(p) || p==0){
                    int curr=nums[i]-p;
                    if(curr>prev){
                        prev=curr;
                        change=true;
                        break;
                    }
                }
            }
            if(!change) return false;
        }
        return true;
    }
};