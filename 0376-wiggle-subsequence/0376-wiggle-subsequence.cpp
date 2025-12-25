class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int ans=0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            bool neg=false, pos=false;
            int curr=0;
            for(int j=i;j<n-1;j++){
                if((nums[j+1]-nums[j]>0) && !pos){
                    curr++;
                    pos=true;
                    neg=false;
                }
                else if((nums[j+1]-nums[j]<0) && !neg){
                    curr++;
                    pos=false;
                    neg=true;
                }
            }
            ans=max(ans,curr+1);
        }
        return ans;
    }
};