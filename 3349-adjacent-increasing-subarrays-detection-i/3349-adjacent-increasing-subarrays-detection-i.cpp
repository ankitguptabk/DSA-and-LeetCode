class Solution {
public:
    bool increasing(int s,int e, vector<int>nums){
            bool ans=true;
            for(int i=s;i<e-1;i++){
                if(nums[i]>=nums[i+1]){
                    ans=false;
                    break;
                }
            }
            return ans;
        }
    bool hasIncreasingSubarrays(vector<int>& n, int k) {
        for(int i=0;i<=n.size()-2*k;i++){
            if(increasing(i,i+k,n)==true && increasing(i+k,i+2*k,n)==true){
                return true;
            }
        }
        return false;
    }
};