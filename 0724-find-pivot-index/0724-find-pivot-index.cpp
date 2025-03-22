class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int ls=0,rs=0;
            for(int j=0;j<i;j++){
                ls+=nums[j];
            }
            for(int j=i+1;j<nums.size();j++){
                rs+=nums[j];
            }
            if(ls==rs ) return i;
        }
        return -1;
    }
};