class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       vector<int>s;
       for(int i=0;i<nums.size();i++){
        int x=(i+1)%nums.size();
        bool f=false;
        while(x!=i){
            if(nums[x]>nums[i]){
                s.push_back(nums[x]);
                f=true;
                break;
            }
            x=(x+1)%nums.size();
        }
        if(!f) s.push_back(-1);
       } 
       return s;
    }
};