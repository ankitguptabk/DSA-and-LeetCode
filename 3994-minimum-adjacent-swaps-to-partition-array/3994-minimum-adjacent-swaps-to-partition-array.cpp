class Solution {
public:
    long long mod=1e9+7;
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
      long long ans=0, m=0,r=0;
      int n = nums.size();
      for(int i=0;i<n;i++){
        if(nums[i]<a){
            ans+=m+r;
        }
        else if(nums[i]>=a && nums[i]<=b){
            ans+=r;
            m++;
        }
        else{
            r++;
        }
      }  
      ans%=mod;
      return ans;
    }
};