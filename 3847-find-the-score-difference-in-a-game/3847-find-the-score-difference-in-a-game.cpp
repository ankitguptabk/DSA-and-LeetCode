class Solution {
public:
    int scoreDifference(vector<int>& nums) {
       int n=nums.size();
       int a=0, b=0;
       bool f=true;
       for(int i=0;i<n;i++){
        if((i+1)%6==0){
            f=!f;
        }
        if(nums[i]%2==1){
            f=!f;
        }
        if(f){
            a+=nums[i];
        }
        else if(!f) b+=nums[i];
       } 
       return a-b;
    }
};